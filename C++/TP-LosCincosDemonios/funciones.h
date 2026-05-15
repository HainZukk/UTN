#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <string>

using namespace std;

void menuPrincipal();

void jugar();

void mostrarEstadoDeSigilos(bool estado_sigilos[],const string NomDemonios[],const string ElementosDemonios[],int cantDemonios);
int tirarDado();
void EvaluarTirada(int dado1,int dado2,bool demonios_disponibles[] , int cantDemonios)


#endif