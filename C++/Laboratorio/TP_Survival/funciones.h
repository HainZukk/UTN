#ifndef FUNCIONES_H
#define FUNCIONES_H

void mostrarIntro();
void menuPrincipal();
void jugar();
float recolectarAlimentos();
float recolectarMateriales(float porcentajeRefugio);


//Etapa 1 Procesamiento de datos
float promedioAlimentos(float KgAlimentos[], int participantes);
void mostrarSuperaronPromedio(float KgAlimentos[] , int participantes);
void MasRapidoConstruccion(int TiempoRefugio[], int participantes);
void Mas5Dias(int TiempoRefugio[] , int participantes);

//Mostrar resultados tanto en etapa 1 como en etapa 2
void mostrarResultados(float kgAlimentos[], int tiempoRefugio[], int participantes, bool clasificados[], string tipoConstruccion);



//Etapa 2
void Construir_Balsa(float ExcedenteAlimento[], bool Clasificados[], float alimentosEtapa2[], int tiempoConstruccion[]);
int generarRandom(int min, int max);




#endif
