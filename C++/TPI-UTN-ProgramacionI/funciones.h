#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <string>

using namespace std;

void menuPrincipal();
string solicitarNombreDescendiente();

void jugar(string &nombreJugadorActual, string &nombreJugadorGuardado, int &invocacionesJugadorGuardado, int &victoriasTotales, int demoniosSellados, int CANT_DEMONIOS, int &derrotasTotales, const int TIRADAS_TOTALES, const string NOMBRES_DEMONIOS[], const string ELEMENTOS_SOMBRAS[], int tiradaActual);
void estadisticas(string &nombreJugadorActual, string &nombreJugadorGuardado, int &invocacionesJugadorGuardado, int victoriasTotales, int derrotasTotales, const int CANT_DEMONIOS, const int TIRADAS_TOTALES);
void creditos();

void mostrarEstadoDeSigilos(bool estado_sigilos[], const string NomDemonios[], const string ElementosDemonios[], int cantDemonios);
int tirarDado();
void lore(string nombreJugadorActual);

void showMessageDefeat(string nombreJugadorActual, const int TIRADAS_TOTALES, bool estado_sigilos[], const string NOMBRES_DEMONIOS[], const int CANT_DEMONIOS);

void ganar(int &victoriasTotales, int demoniosSellados, int CANT_DEMONIOS, string &nombreJugadorGuardado, string nombreJugadorActual, int tiradaActual, int &invocacionesJugadorGuardado);
//Actualizamos funcion de derrota para que se pueda utilizar la funcion de estadisticas.
void derrota(int &derrotasTotales, string nombreJugadorActual, const int TIRADAS_TOTALES, bool estado_sigilos[], const string NOMBRES_DEMONIOS[], const int CANT_DEMONIOS);

void EvaluarTirada(int dado1, int dado2, bool estado_sigilos[], bool demonios_disponibles[], int cantDemonios);
int contarDisponibles(bool demoniosDisponibles[], int cantDemonios);

void mostrarOpcionesDisponibles(bool demonios_disponibles[], const string NOMBRES[], const string ELEMENTOS[], int cantDemonios, int opcionesValidas[], int &cantOpciones);

int elegirDemonio(int cantOpciones);


bool lazamanusEvent(string nombreJugadorActual);

//Funcion para estadisticas
void DemoniosPorEstado(bool estado_sigilos[], const string NOMBRES_DEMONIOS[], const int CANT_DEMONIOS);

#endif