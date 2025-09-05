#ifndef FUNCIONES_H
#define FUNCIONES_H

void ingresarAlimentos(int Alimentos[] , int cantidad);

void ingresarTiempoEmpleado(int Tiempo[], int TiempoEmpleado);

void evaluarDescalificados(int TiempoEmpleado[], int AlimentosRecolectados[], bool Descalificados[], int cantidad);

float CalcularPromedioAlimentos(int AlimentosRecolectados [] , int cantidad );

int MasRapidoTiempoConstruccion(int TiempoEmpleado[],int cantidad);

int NoCompletaronRefugio(int TiempoEmpleado[],int cantidad);

void Estado_de_Participante(bool Descalificados[],int AlimentosRecolectados[],int TiempoEmpleado[], int cantidad);



#endif