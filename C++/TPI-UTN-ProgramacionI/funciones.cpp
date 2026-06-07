#include <iostream>
#include "funciones.h"
#include <cstdlib>
#include <ctime>
using namespace std;

// Funcion que pide el nombre del descendiente
string solicitarNombreDescendiente()
{
    string nombreJugadorActual;
    char confirmar;

    // TODO: FALTARIA AJUSTAR QUE CUANDO INGRESA UN SI o un si, LO TOME (HECHO PAU)
    do
    {
        cout << " ----------- Ingrese el nombre del jugador: -----------" << endl;
        cin >> nombreJugadorActual;
        cout << endl;
        cout << "El nombre " << nombreJugadorActual << " es correcto?" << endl
             << endl;
        cout << " ::: Confirmar (S/N) :::" << endl;
        cin >> confirmar;
        cout << endl;
    } while (confirmar != 'S' && confirmar != 's');

    return nombreJugadorActual;
}

// Fn que muestra msj de derrota
void showMessageDefeat(string nombreJugadorActual, const int TIRADAS_TOTALES, bool estado_sigilos[], const string NOMBRES_DEMONIOS[], const int CANT_DEMONIOS){
    // TODO: Falta colocar los nombres de los demonios sellados y demonios libres
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! " << endl;
    cout << endl
         << "AMANECE Y LOS SIGILOS SIGUEN BRILLANDO. " << endl;
    cout << endl
         << nombreJugadorActual << " no logró completar el ritual a tiempo. " << endl;
    cout << "Las sombras restantes lo arrastraron entre las páginas del libro, " << endl;
    cout << "donde ahora custodiará el Necronomicón hasta que otro descendiente" << endl;
    cout << "repita el ritual. " << endl;
    cout << endl
         << "::: FIN DE LA PARTIDA - DERROTA :::" << endl;
    cout << endl
         << TIRADAS_TOTALES << " invocaciones agotadas" << endl;

    //Funcion para estado de los demonios (SELLADO - LIBRE)
    DemoniosPorEstado(estado_sigilos, NOMBRES_DEMONIOS, CANT_DEMONIOS);
    cout << endl
         << "Presiona cualquier tecla para continuar..." << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cin.ignore();
    cin.get();
}

// Fn que muestra msj de victoria
void showMessageVictory(string nombreJugadorActual, int invocacionesJugadorGuardado)
{
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! " << endl;
    cout << endl
         << "AMANECER. EL RITUAL ESTÁ COMPLETO. " << endl;
    cout << endl
         << "Los cinco sigilos se apagaron uno tras otro. " << endl;
    cout << "El Necronomicón se cerró por sí solo y volvió a sellarse. " << endl;
    cout << endl
         << nombreJugadorActual << " sobrevivió a la noche más larga de su vida. " << endl;

    cout << endl
         << "Los Antiguos no regresarán... por ahora. " << endl;
    cout << endl
         << "FIN DE LA PARTIDA - VICTORIA " << endl;
    cout << endl
         << "Sellaste a los cinco demonios" << endl;
    cout << "Invocaciones utilizadas " << invocacionesJugadorGuardado << "de 15" << endl;

    cout << "Presiona cualquier tecla para continuar..." << endl;
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
    cin.ignore();
    cin.get();
}

// Funcion tirar dados
int tirarDado()
{
    return (rand() % 6) + 1; // funcion aleatoria que genera un rango de 1 a 6
}

void menuPrincipal()
{
    // variables a usar, se colocan en este nivel para que puedan estar disponibles en las funciones jugar y estadisticas, para que se pasen dinamicamente
    const int CANT_DEMONIOS = 5;
    const int TIRADAS_TOTALES = 15;

    const string NOMBRES_DEMONIOS[] = {"Baramos", "Dracolord", "Darck", "WhiteKing", "Lazamanus"};
    const string ELEMENTOS_SOMBRAS[] = {"Sombra del Fuego", "Sombra del Agua", "Sombra de la Tierra", "Sombra del Aire", "Sombra Mayor"};

    int tiradaActual = 0;


    //Estas variables no se utilizan ya que estan declaradas localmente en jugar().
    // bool estado_sigilos[5] = {};
    // bool demonios_disponibles[5] = {};

    int opcion;
    int invocacionesJugadorGuardado;

    int victoriasTotales = 0;
    int derrotasTotales = 0;
    int demoniosSellados = 0;

    string nombreJugadorActual;
    string nombreJugadorGuardado;

    do
    // system("cls") limpia la pantalla
    {
        cout << " ::::: LOS CINCO DEMONIOS :::::" << endl;
        cout << "------------------------------" << endl;
        cout << " 1 - JUGAR" << endl;
        cout << " 2 - ESTADISTICAS" << endl;
        cout << " 3 - CREDITOS" << endl;
        cout << "------------------------------" << endl;
        cout << "0 - SALIR" << endl
             << endl;
        cout << "Ingresar la opcion elegida" << endl;
        cin >> opcion;
        cout << endl;

        switch (opcion)
        {
            {
            case 1:
                nombreJugadorActual = solicitarNombreDescendiente();
                jugar(nombreJugadorActual, nombreJugadorGuardado, invocacionesJugadorGuardado, victoriasTotales, demoniosSellados, CANT_DEMONIOS, derrotasTotales, TIRADAS_TOTALES, NOMBRES_DEMONIOS, ELEMENTOS_SOMBRAS, tiradaActual);
                break;
            }
            {
            case 2:
                estadisticas(nombreJugadorActual, nombreJugadorGuardado, invocacionesJugadorGuardado, victoriasTotales, derrotasTotales, CANT_DEMONIOS, TIRADAS_TOTALES);
                break;
            }
            {
            case 3:
                creditos();
                break;
            }
        }
        // system("pause > nul") limpia la pantalla con >null hace una pausa

    } while (opcion != 0);
}

// ---Funcion que ejecuta el lore del juego
void lore(string nombreJugadorActual)
{
    cout << "Iniciando juego para: " << nombreJugadorActual << endl
         << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Otoño de 2026. La biblioteca de tu familia profanada." << endl;
    cout << "El Necronomicón abierto. Cinco sigilos brillan en rojo." << endl;
    cout << "Las sombras vagan por el mundo. Solo vos podés sellarlas." << endl;
    cout << "Tenés 15 invocaciones antes del amanecer. Sellalas." << endl;
    cout << "----------------------------------------------------------" << endl;
}

// Funcion de derrota
void derrota(int &derrotasTotales, string nombreJugadorActual, const int TIRADAS_TOTALES, bool estado_sigilos[], const string NOMBRES_DEMONIOS[], const int CANT_DEMONIOS)
{
    derrotasTotales++;
    showMessageDefeat(nombreJugadorActual, TIRADAS_TOTALES, estado_sigilos, NOMBRES_DEMONIOS, CANT_DEMONIOS);
}

// funcion de victoria
void ganar(int &victoriasTotales, int demoniosSellados, int CANT_DEMONIOS, string &nombreJugadorGuardado, string nombreJugadorActual, int tiradaActual, int &invocacionesJugadorGuardado)
{
    victoriasTotales++;
    if (demoniosSellados == CANT_DEMONIOS)
    {
        cout << "Ganaste." << endl;
        if (nombreJugadorGuardado == "") // si el nombre del jugador guardado esta vacio
        {
            nombreJugadorGuardado = nombreJugadorActual;
            invocacionesJugadorGuardado = tiradaActual;
            cout << "ganaste y pasas a ser el primer ganador" << endl;
        }
        else if (nombreJugadorGuardado == nombreJugadorActual)
        {
            if (tiradaActual < invocacionesJugadorGuardado)
            {
                invocacionesJugadorGuardado = tiradaActual;
            }
        }
        else if (nombreJugadorGuardado != "")
        {
            if (invocacionesJugadorGuardado == tiradaActual)
            {
                cout << "Empataste con el jugador anterior" << endl;
            }
            else if (invocacionesJugadorGuardado < tiradaActual)
            {
                // el primer ganador sigue siendo el mejor
                cout << "ganaste, pero" << nombreJugadorGuardado << " lo hizo en" << tiradaActual << endl;
            }
            else
            {
                // nuevo ganador
                nombreJugadorGuardado = nombreJugadorActual;
                invocacionesJugadorGuardado = tiradaActual;
                cout << "ganaste y lo hiciste en menos tiradas que el anterior" << endl;
            }
        }
    }
}

// Funcion principal (cdo eligen opcion jugar)
void jugar(string &nombreJugadorActual, string &nombreJugadorGuardado, int &invocacionesJugadorGuardado, int &victoriasTotales, int demoniosSellados, int CANT_DEMONIOS, int &derrotasTotales, const int TIRADAS_TOTALES, const string NOMBRES_DEMONIOS[], const string ELEMENTOS_SOMBRAS[], int tiradaActual)
{
    bool estado_sigilos[5] = {};
    bool demonios_disponibles[5] = {};

    lore(nombreJugadorActual); // fn que ejecuta el lore del juego

    srand(time(NULL));
    // sran(time(0)) --> inicializo en 0 para numeros al azar

    while (tiradaActual < TIRADAS_TOTALES && demoniosSellados < CANT_DEMONIOS)
    {

        tiradaActual++;

        for (int i = 0; i < CANT_DEMONIOS; i++){
            demonios_disponibles[i] = false;
        }

        cout << "\nLOS CINCO DEMONIOS" << endl;
        cout << "-------------------" << endl;
        cout << "Invocacion " << tiradaActual << " de " << TIRADAS_TOTALES << " quedan  " << TIRADAS_TOTALES - tiradaActual << endl;

        // Llamada a la funcion para saber el estado de los demonios.
        mostrarEstadoDeSigilos(estado_sigilos, NOMBRES_DEMONIOS, ELEMENTOS_SOMBRAS, CANT_DEMONIOS);
        cout << "-------------------" << endl;
        cout << "Presione ENTER para tirar los dados..." << endl;
        cin.ignore();
        cin.get();

        int dado1 = tirarDado();
        int dado2 = tirarDado();
        cout << "Tirada de dados: [" << dado1 << "] [" << dado2 << "]" << endl;
        EvaluarTirada(dado1, dado2, estado_sigilos, demonios_disponibles, CANT_DEMONIOS);

        int cantDisponible = contarDisponibles(demonios_disponibles, CANT_DEMONIOS);

        if (cantDisponible == 0)
        {
            cout << "La tirada no cumple ninguna combinacion. La invocacion falla." << endl;

            // Implementacion de funcion de Lazamanus

            if (!estado_sigilos[4]){
                if (lazamanusEvent(nombreJugadorActual)){
                    derrota(derrotasTotales, nombreJugadorActual, TIRADAS_TOTALES, estado_sigilos, NOMBRES_DEMONIOS, CANT_DEMONIOS);

                    return;
                }
            }
        }
        else
        {
            cout << "Combinaciones cumplidas:" << endl;
            int opcionesValidas[5];
            int cantOpciones = 0;
            mostrarOpcionesDisponibles(demonios_disponibles, NOMBRES_DEMONIOS, ELEMENTOS_SOMBRAS, CANT_DEMONIOS, opcionesValidas, cantOpciones);
            int eleccion = elegirDemonio(cantOpciones);
            int indice = opcionesValidas[eleccion - 1];
            estado_sigilos[indice] = true;
            demoniosSellados++;
            cout << NOMBRES_DEMONIOS[indice] << " ha sido SELLADO." << endl;
        }
    }

    if (demoniosSellados == CANT_DEMONIOS)
    {
        ganar(victoriasTotales, demoniosSellados, CANT_DEMONIOS, nombreJugadorGuardado, nombreJugadorActual, tiradaActual, invocacionesJugadorGuardado);
    }

    else
    {
        derrota(derrotasTotales, nombreJugadorActual, TIRADAS_TOTALES, estado_sigilos, NOMBRES_DEMONIOS, CANT_DEMONIOS);
    }
}

// Funcion estadisticas

void estadisticas(string &nombreJugadorActual, string &nombreJugadorGuardado, int &invocacionesJugadorGuardado, int victoriasTotales, int derrotasTotales, const int CANT_DEMONIOS, const int TIRADAS_TOTALES)
{
    int totalDePartidas = victoriasTotales + derrotasTotales;
    cout << " ::::: PANTALLA ESTADISTICAS ::::: " << endl
         << endl;

    cout
        << nombreJugadorGuardado << " fue quien sello a los " << CANT_DEMONIOS << " demonios mas rapidamente en " << invocacionesJugadorGuardado << " invocaciones" << endl;
    cout << endl;
    cout << "TOTAL DE PARTIDAS: " << totalDePartidas << endl;
    cout << "VICTORIAS: " << victoriasTotales << endl;
    cout << "DERROTAS: " << derrotasTotales << endl;
    cout << endl;
    cout << " Presiona una tecla para continuar... " << endl
         << endl;
    // pausar la ejecución de un programa de consola hasta que el usuario presione Enter.
    cin.ignore();
    cin.get();
}

// Funcion creditos

void creditos()
{
    // TODO: Faltan agregar los numeros de los legajos
    string apellido1 = "Nguyen ";
    string apellido2 = "Rodriguez ";
    int legajo1 = 32580;
    int legajo2 = 31;
    string nombre1 = "Tobias";
    string nombre2 = "Paula";

    cout << " :::::::: CREDITOS :::::::: " << endl
         << endl;
    cout << " ... Equipo 9 ... " << endl
         << endl;
    cout << "Integrantes: " << endl
         << endl;
    cout << "* " << apellido1 << nombre1 << " -------- Legajo: " << legajo1 << endl;
    cout << "* " << apellido2 << nombre2 << " -------- Legajo: " << legajo2 << endl
         << endl;

    cout << " Presiona una tecla para continuar... " << endl
         << endl;
    cin.ignore();
    cin.get();
}

void mostrarEstadoDeSigilos(bool estado_sigilos[], const string NomDemonios[], const string ElementosDemonios[], int cantDemonios)
{
    cout << "ESTADO DE LOS SIGILOS: " << endl;
    for (int i = 0; i < cantDemonios; i++)
    {
        if (estado_sigilos[i])
        {
            cout << "[ SELLADO ] ";
        }
        else
        {
            cout << "[ LIBRE ] ";
        }
        cout << NomDemonios[i] << " - " << ElementosDemonios[i] << endl;
    }
}

// Funcion para evaluar que demonios podemos cerrar
void EvaluarTirada(int dado1, int dado2, bool estado_sigilos[], bool demonios_disponibles[], int cantDemonios)
{
    int sumaDados = dado1 + dado2;

    // Baramos
    if (!estado_sigilos[0] && dado1 == dado2)
    {
        demonios_disponibles[0] = true;
    }
    // Dracolord
    if (!estado_sigilos[1] && sumaDados == 7)
    {
        demonios_disponibles[1] = true;
    }
    // Darck
    if (!estado_sigilos[2] && (dado1 - dado2 == 1 || dado2 - dado1 == 1))
    {
        demonios_disponibles[2] = true;
    }
    // Whiteking
    if (!estado_sigilos[3] && sumaDados >= 10)
    {
        demonios_disponibles[3] = true;
    }
    // Lazamanus
    if (!estado_sigilos[4] && dado1 == dado2 && (dado1 == 5 || dado1 == 6))
    {
        demonios_disponibles[4] = true;
    }
}

int contarDisponibles(bool demoniosDisponibles[], int cantDemonios)
{
    int cantDisponible = 0;

    for (int i = 0; i < cantDemonios; i++)
    {
        if (demoniosDisponibles[i])
        {
            cantDisponible++;
        }
    }
    return cantDisponible;
}

void mostrarOpcionesDisponibles(bool demonios_disponibles[], const string NOMBRES[], const string ELEMENTOS[], int cantDemonios, int opcionesValidas[], int &cantOpciones)
{
    cantOpciones = 0;
    for (int i = 0; i < cantDemonios; i++)
    {
        if (demonios_disponibles[i])
        {
            cantOpciones++;
            opcionesValidas[cantOpciones - 1] = i;
            cout << cantOpciones << " - " << NOMBRES[i] << " - " << ELEMENTOS[i] << endl;
        } // Falta desarollo
    }
}

int elegirDemonio(int cantOpciones)
{
    int eleccion;
    cout << "¿Que sigilo deseas apagar? " << endl;
    cin >> eleccion;
    while (eleccion < 1 || eleccion > cantOpciones)
    {
        cout << "Opcion invalida. Ingrese una opcion valida: " << endl;
        cin >> eleccion;
    }
    return eleccion;
}


// Nueva funcion de Lazamanus 
bool lazamanusEvent(string nombreJugadorActual){
    cout << "LAZAMANUS acecha.... tira tres dados" << endl;
    cin.ignore();
    cin.get();

    int d1 = tirarDado();
    int d2 = tirarDado();
    int d3 = tirarDado();

    cout << "Dados de Lazamanus: [" << d1 << "] [" << d2 << "] [" << d3 << "]" << endl;

    if (d1 == 6 && d2 == 6 && d3 == 6){
        cout << "Triple 6 , Lazamanus te ha atrapado en el libro." << endl;
        return true;
    }
    
    cout << "Lograste escapar de Lazamanus ... Por ahora" << endl;
    return false;
}



// Funcion para estadistica
void DemoniosPorEstado(bool estado_sigilos[],const string NOMBRES_DEMONIOS[] , const int CANT_DEMONIOS){
    cout << "Demonios sellados:" << endl;

    for (int i = 0; i < CANT_DEMONIOS; i++){
        if (estado_sigilos[i]){
            cout << "- " << NOMBRES_DEMONIOS[i] << endl;
        }
    }

    cout << "Demonios libres:" << endl;
    for (int i = 0; i < CANT_DEMONIOS; i++){
        if (!estado_sigilos[i]){
            cout << "- " << NOMBRES_DEMONIOS[i] << endl;

        }
            
    }
}