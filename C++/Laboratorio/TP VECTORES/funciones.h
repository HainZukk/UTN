#ifndef FUNCIONES_H
#define FUNCIONES_H

void ingresarAlimentos(int Alimentos[] , int cantidad);

void ingresarTiempoEmpleado(int Tiempo[], int cantidad);

void evaluarDescalificados(int TiempoEmpleado[], int AlimentosRecolectados[], bool Descalificados[], int cantidad);

float CalcularPromedioAlimentos(int AlimentosRecolectados [] , int cantidad );

int MasRapidoTiempoConstruccion(const int TiempoEmpleado[],int cantidad);

int NoCompletaronRefugio(const int TiempoEmpleado[],int cantidad);

void Estado_de_Participante(const bool Descalificados[],int AlimentosRecolectados[],int TiempoEmpleado[], int cantidad);

void Debajo_Promedio(const int AlimentosRecolectados[],int cantidad,float promedio);

#endif