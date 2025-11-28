#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <string>
using namespace std;

void mostrarIntro();
void menuPrincipal();
void jugar();
float recolectarAlimentos();
float recolectarMateriales(float porcentajeRefugio);

// Etapa 1 Procesamiento de datos
float promedioAlimentos(float KgAlimentos[], int participantes);
void mostrarSuperaronPromedio(float KgAlimentos[] , int participantes);
void MasRapidoConstruccion(int TiempoRefugio[], int participantes);
void Mas5Dias(int TiempoRefugio[] , int participantes);
void mostrarResultadosEtapa1(float kgAlimentos[], int tiempoRefugio[], bool clasificados[], int participantes); // nuevo

// Mostrar resultados tanto en etapa 1 como en etapa 2
// void mostrarResultados(float kgAlimentos[], int tiempoRefugio[], int participantes, bool clasificados[], string tipoConstruccion);

bool hayAlgunClasificado(bool clasificados[], int participantes); // nueva funcion para clasificados

// Etapa 2
void Construir_Balsa(float ExcedenteAlimento[], bool Clasificados[], float alimentosEtapa2[], int tiempoConstruccion[]);
float promedioAlimentosEtapa2(float kgAlimentos[], bool clasificados[], int participantes);
void mostrarSuperaronPromedioEtapa2(float kgAlimentos[], bool clasificados[], int participantes);
void mostrarMasRapidoEnConstruir(int tiempoConstruccion[], bool clasificados[], int participantes);
int generarRandom(int min, int max);
//Nueva funcion para mostrar en tabla
void mostrarResultadosEtapa2(float alimentosEtapa2[], int tiempoConstruccion[], bool Clasificados[], int participantes);

// Etapa 3
float simularVelocidad();
void RutaFinal(bool clasificados[], int cantidad);
int participanteMasRapido(float Tiempos[], bool clasificados[], int cantidad, float &tiempoMin);
void mostrarResultadosOrdenados(float tiempos[], bool llego[], int cantidad);
#endif
