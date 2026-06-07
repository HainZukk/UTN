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

void showMessageDefeat(string nombreJugadorActual, const int TIRADAS_TOTALES);

void ganar(int &victoriasTotales, int demoniosSellados, int CANT_DEMONIOS, string &nombreJugadorGuardado, string nombreJugadorActual, int tiradaActual, int &invocacionesJugadorGuardado);
void derrota(int &derrotasTotales, string nombreJugadorActual, const int TIRADAS_TOTALES);

void EvaluarTirada(int dado1, int dado2, bool estado_sigilos[], bool demonios_disponibles[], int cantDemonios);
int contarDisponibles(bool demoniosDisponibles[], int cantDemonios);

void mostrarOpcionesDisponibles(bool demonios_disponibles[], const string NOMBRES[], const string ELEMENTOS[], int cantDemonios, int opcionesValidas[], int &cantOpciones);

int elegirDemonio(int cantOpciones);


bool lazamanusEvent(string nombreJugadorActual);

#endif