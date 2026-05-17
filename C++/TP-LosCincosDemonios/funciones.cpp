#include <iostream>
#include "funciones.h"
#include <cstdlib>
#include <ctime>
using namespace std;

void menuPrincipal(){
    int opcion;

    do{
      cout << "LOS CINCO DEMONIOS" << endl;
      cout << "------------------" << endl;
      cout << " 1 - JUGAR" << endl;
      cout << " 2 - ESTADISTICAS" << endl;
      cout << " 3 - CREDITOS" << endl;
      cout << "------------------" << endl;
      cout << "0 - SALIR" << endl;
      cin >> opcion;

      switch (opcion){
      case 1:
            jugar();
            break;
      case 2: 
            // Aca van las estadisticas
            break;
      case 3:
            cout << "Creditos" << endl;
            break;

      }
      
    } while (opcion != 0);
}

// Funcion principal 
void jugar(){
    string nombreDescendiente;
    const int TIRADAS_TOTALES = 15; 
    int demoniosSellados = 0; //Contador de demonios sellados
    int tiradaActual = 0; //Contador
    bool estado_sigilos[5] = {false,false,false,false,false};
    bool demonios_disponibles[5] = {false,false,false,false,false}; // ACA 


    const string NOMBRES[]   = {"Baramos", "Dracolord", "Darck", "WhiteKing", "Lazamanus"};
    const string ELEMENTOS[] = {"Sombra del Fuego", "Sombra del Agua", "Sombra de la Tierra", "Sombra del Aire", "Sombra Mayor"};
    const int CANT_DEMONIOS  = 5; // Constante para comparar si hay demonios sellados.


    cout << "-----------------------------------------------------" << endl;
    cout << "Otoño de 2026. La biblioteca de tu familia profanada." << endl;
    cout << "El Necronomicón abierto. Cinco sigilos brillan en rojo." << endl;
    cout << "Las sombras vagan por el mundo. Solo vos podés sellarlas." << endl;
    cout << "Tenés 15 invocaciones antes del amanecer. Sellalas." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Ingrese el nombre del descendiente: ";
    cin >> nombreDescendiente;

    srand(time(NULL)); 

    while (tiradaActual < TIRADAS_TOTALES && demoniosSellados < CANT_DEMONIOS){

        tiradaActual++;

        for (int i = 0; i < CANT_DEMONIOS; i++){
            demonios_disponibles[i] = false;
        }


        cout << "\nLOS CINCO DEMONIOS" << endl;
        cout << "-------------------" << endl;
        cout << "Invocacion " << tiradaActual << " de " << TIRADAS_TOTALES<< " quedan  "<< TIRADAS_TOTALES - tiradaActual << endl;
        cout << "DESCENDIENTE: " << nombreDescendiente << endl;

        //Llamada a la funcion para saber el estado de los demonios.
        mostrarEstadoDeSigilos(estado_sigilos,NOMBRES,ELEMENTOS,CANT_DEMONIOS);
        cout << "-------------------";
        cout << "Presione ENTER para tirar los dados...";
        cin.ignore();
        cin.get();

        int dado1 = tirarDado();
        int dado2 = tirarDado();
        cout << "Tirada de dados: [" << dado1 << "] [" << dado2 << "]" << endl;
        EvaluarTirada(dado1, dado2, estado_sigilos, demonios_disponibles, CANT_DEMONIOS);

        int cantDisponible = contarDisponibles(demonios_disponibles,CANT_DEMONIOS);

        if (cantDisponible == 0){
            cout << "La tirada no cumple ninguna combinacion. La invocacion falla." << endl;
        }
        else {
            cout << "Combinaciones cumplidas:" << endl;
            int opcionesValidas[5];
            int cantOpciones = 0;
            mostrarOpcionesDisponibles(demonios_disponibles, NOMBRES, ELEMENTOS, CANT_DEMONIOS, opcionesValidas, cantOpciones);
            int eleccion = elegirDemonio(cantOpciones);
            int indice = opcionesValidas[eleccion - 1];
            estado_sigilos[indice] = true;
            demoniosSellados++;
            cout << NOMBRES[indice] << " ha sido SELLADO." << endl;
        }
        
    }
    

}

void mostrarEstadoDeSigilos(bool estado_sigilos[],const string NomDemonios[],const string ElementosDemonios[],int cantDemonios){
    cout << "ESTADO DE LOS SIGILOS: " << endl;
    for (int i = 0; i < cantDemonios ; i++){
        if (estado_sigilos[i]){ 
            cout << "[ SELLADO ] ";
        }
        else{
            cout << "[ LIBRE ] ";
        }
        cout << NomDemonios[i] << " - " << ElementosDemonios[i] << endl;
        
    }
    
}

int tirarDado(){
    return (rand() % 6) + 1;
}


//Funcion para evaluar que demonios podemos cerrar
void EvaluarTirada(int dado1, int dado2, bool estado_sigilos[], bool demonios_disponibles[], int cantDemonios){
    int sumaDados = dado1 + dado2;

    // Baramos
    if (!estado_sigilos[0] && dado1 == dado2){
        demonios_disponibles[0] = true;
    }
    //Dracolord
    if (!estado_sigilos[1] && sumaDados == 7){
        demonios_disponibles[1] = true;
    }
    //Darck
    if (!estado_sigilos[2] && (dado1 - dado2 == 1 || dado2 - dado1 == 1)){
        demonios_disponibles[2] = true;
    }
    //Whiteking
    if (!estado_sigilos[3] && sumaDados >= 10){
        demonios_disponibles[3] = true;
    }
    //Lazamanus
    if (!estado_sigilos[4] && dado1 == dado2 && (dado1 == 5 || dado1 == 6) ){
        demonios_disponibles[4] = true;   
    }
}

int contarDisponibles(bool demoniosDisponibles[],int cantDemonios){
    int cantDisponible = 0;

    for (int i = 0; i < cantDemonios; i++){
        if (demoniosDisponibles[i]){
            cantDisponible++;
        }    
    }
    return cantDisponible;
}
    

void mostrarOpcionesDisponibles(bool demonios_disponibles[], const string NOMBRES[], const string ELEMENTOS[], int cantDemonios, int opcionesValidas[], int &cantOpciones){
    cantOpciones = 0;
    for (int i = 0; i < cantDemonios; i++){
        if (demonios_disponibles[i]){
            cantOpciones++;
            opcionesValidas[cantOpciones - 1] = i;
            cout << cantOpciones << " - " << NOMBRES[i] << " - " << ELEMENTOS[i] << endl;
        } // Falta desarollo
    }
}

int elegirDemonio(int cantOpciones){
    int eleccion;
    cout << "¿Que sigilo deseas apagar? ";
    cin >> eleccion;
    while (eleccion < 1 || eleccion > cantOpciones){
        cout << "Opcion invalida. Ingrese una opcion valida: ";
        cin >> eleccion;
    }
    return eleccion;
}