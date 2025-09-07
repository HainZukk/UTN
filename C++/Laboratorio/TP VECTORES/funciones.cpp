#include <iostream>
#include <cstdlib>
#include <ctime>   
#include "funciones.h"
using namespace std;

void ingresarAlimentos(int Alimentos[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        // valores aleatorios entre 0 y 10 Kg
        Alimentos[i] = rand() % 11;  
    }
}

void ingresarTiempoEmpleado(int Tiempo[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
        Tiempo[i] = 1 + rand() % 10;  
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

int MasRapidoTiempoConstruccion(const int TiempoEmpleado[],int cantidad) {
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

int NoCompletaronRefugio(const int TiempoEmpleado[],int cantidad){
    int partNoRefugio = 0;
    for (int i = 0; i < cantidad; i++){
        if (TiempoEmpleado[i] == 0){
            partNoRefugio++;
        }
    }
    return partNoRefugio;
}

void Estado_de_Participante(const bool Descalificados[],int AlimentosRecolectados[],int TiempoEmpleado[], int cantidad){
    for (int i = 0; i < cantidad; i++) {
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

void Debajo_Promedio(const int AlimentosRecolectados[],int cantidad,float promedio){

    for (int i = 0; i < cantidad; i++) {
        if (AlimentosRecolectados[i] < promedio) {
            cout << " - Participante " << i + 1 << " con " << AlimentosRecolectados[i] << " Kg\n";
        }
    }
}

