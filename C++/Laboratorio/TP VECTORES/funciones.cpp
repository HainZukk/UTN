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

int MasRapidoTiempoConstruccion(int TiempoEmpleado[],int cantidad) {
    int minTiempo = TiempoEmpleado[0];
    int ParticipanteMasRapido = 0;
    for (int i = 1; i < cantidad; i++) {
        if (TiempoEmpleado[i] < minTiempo) {
            minTiempo = TiempoEmpleado[i];
            ParticipanteMasRapido = i;
        }
    }
    return ParticipanteMasRapido;
}

int NoCompletaronRefugio(int TiempoEmpleado[],int cantidad){
    int partNoRefugio = 0;
    for (int i = 0; i < 12; i++){
        if (TiempoEmpleado[i] == 0){
            partNoRefugio++;
        }
    }
    return partNoRefugio;
}

void Estado_de_Participante(bool Descalificados[],int AlimentosRecolectados[],int TiempoEmpleado[], int cantidad){
    for (int i = 0; i < 12; i++) {
        cout << "Participante " << i + 1 << " -> ";
        if (Descalificados[i]) {
            cout << "Descalificado, ";
        } else {
            cout << "Clasificado, ";
        }
        cout << "Alimentos: " << AlimentosRecolectados[i] << " Kg, "
             << "Tiempo: " << TiempoEmpleado[i] << " dias\n";
    }
}