#ifndef FUNCIONES_H
#define FUNCIONES_H

void menuPrincipal();
void jugar();
float recolectarAlimentos();
float recolectarMateriales(float porcentajeRefugio);


//Etapa 1 Procesamiento de datos
float promedioAlimentos(float KgAlimentos[], int participantes);
void mostrarSuperaronPromedio(float KgAlimentos[] , int participantes);
void MasRapidoConstruccion(int TiempoRefugio[], int participantes);
void Mas5Dias(int TiempoRefugio[] , int participantes);
void mostrarResultados(float kgAlimentos[], int tiempoRefugio[], int participantes);


//Etapa 2
void Construir_Balsa(float ExcedenteAlimento[], bool Clasificados[]);
int generarRandom(int min, int max);



#endif
