#include <iostream>
#include "funciones.h"
#include <cstdlib>

// Constantes globales de tipo vector que almacenan los nombres y los elementos .
const string NOMBRES[]   = {"Baramos", "Dracolord", "Darck", "WhiteKing", "Lazamanus"};
const string ELEMENTOS[] = {"Sombra del Fuego", "Sombra del Agua", "Sombra de la Tierra", "Sombra del Aire", "Sombra Mayor"};
const int CANT_DEMONIOS  = 5; // Constante para comparar si hay demonios sellados.

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
            // Aca van los creditos
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
    int demoniosSellados = 0; // Contador.
    int tiradaActual = 0;
    bool estado_sigilos[5] = {false,false,false,false,false};


    cout << "-----------------------------------------------------" << endl;
    cout << "Otoño de 2026. La biblioteca de tu familia profanada." << endl;
    cout << "El Necronomicón abierto. Cinco sigilos brillan en rojo." << endl;
    cout << "Las sombras vagan por el mundo. Solo vos podés sellarlas." << endl;
    cout << "Tenés 15 invocaciones antes del amanecer. Sellalas." << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "Ingrese el nombre del descendiente: ";
    cin >> nombreDescendiente;

    while (tiradaActual < TIRADAS_TOTALES && demoniosSellados < CANT_DEMONIOS){
        tiradaActual++;

        cout << "\nLOS CINCO DEMONIOS" << endl;
        cout << "-------------------" << endl;
        cout << "Invocacion " << tiradaActual << " de " << TIRADAS_TOTALES<< " quedan  "<< TIRADAS_TOTALES - tiradaActual << endl;
        cout << "DESCENDIENTE: " << nombreDescendiente << endl;

        //Llamada a la funcion para saber el estado de los demonios.
        mostrarEstadoDeSigilos(estado_sigilos);
    }
    

}

void mostrarEstadoDeSigilos(bool estado_sigilos[]){
    cout << "ESTADO DE LOS SIGILOS: " << endl;
    for (int i = 0; i < CANT_DEMONIOS ; i++){
        if (estado_sigilos[i]){
            cout << "[ SELLADO ] ";
        }
        else{
            cout << "[ LIBRE ] ";
        }
        cout << NOMBRES[i] << " - " << ELEMENTOS[i] << endl;
        
    }
    
}