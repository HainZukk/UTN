#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "Alumno.h"
 
void menuPrincipal();
 
void cargarAlumnos(Alumno vec[], int cant);
void mostrarAlumnos(Alumno vec[], int cant);
void buscarPorLegajo(Alumno vec[], int cant);
void listarPorApellido(Alumno vec[], int cant);
void listarInscriptosAntesDe(Alumno vec[], int cant);
 
#endif // MENU_H_INCLUDED