#include <iostream>
#include "funciones.h"
using namespace std;

void ingresarAlimentos(int Alimentos[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese la cantidad de alimentos recolectados (Kg) del participante " << i + 1 << ": ";
        cin >> Alimentos[i];
    }
}

void ingresarTiempoEmpleado(int Tiempo[],int TiempoEmpleado){
  for (int i = 0; i < 12; i++) {
        cout << "Ingrese el tiempo empleado en la construccion del refugio (Dias) del participante " << i + 1 << ": ";
        cin >> Tiempo[i];
    }
}

void evaluarDescalificados(int TiempoEmpleado[], int AlimentosRecolectados[], bool Descalificados[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (TiempoEmpleado[i] >= 7) {
            TiempoEmpleado[i] = 0;
            Descalificados[i] = true;
        }
        if (AlimentosRecolectados[i] < 2) {
            Descalificados[i] = true;
        }
    }
}

float CalcularPromedioAlimentos(int alimentos[], int cantidad) {
    int suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += alimentos[i];
    }
    return (float)suma / cantidad;
}