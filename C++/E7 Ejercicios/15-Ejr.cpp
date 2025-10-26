/*
Dada una lista de 5 números, cargarlos en un vector. Armar luego otro vector de 9 elementos donde por cada 2 elementos del vector original intercale el promedio de ellos. Por ejemplo: [2, 4, 6, 8, 10],  el vector queda: [2, 3, 4, 5, 6, 7, 8, 9, 10].
*/

#include <iostream>
using namespace std;

const int TAM_ORIGINAL = 5;
const int TAM_NUEVO = 9;


void CargarVector(int vec[]){
    cout << "Ingrese " << TAM_ORIGINAL << " numeros " << endl;
    for (int i = 0; i < TAM_ORIGINAL; i++){
        cin >> vec[i];
    }
}

void IntercalarVector(int vec[], float nuevovec[]) {
    int j = 0; 

    for (int i = 0; i < TAM_ORIGINAL - 1; i++) {
        nuevovec[j++] = vec[i];                       
        nuevovec[j++] = (vec[i] + vec[i + 1]) / 2.0;   
    }
    nuevovec[j] = vec[TAM_ORIGINAL - 1]; 
}

void MostarVector(float Nuevo_Vec[]){
    cout << "El nuevo vector esta compuesto de la siguiente manera = " << endl;
    for (int i = 0; i < TAM_NUEVO; i++){
        cout << Nuevo_Vec[i] << " ";
    }
}

int main(){
    int vec[TAM_ORIGINAL];
    float NuevoVec[TAM_NUEVO];

    CargarVector(vec);
    IntercalarVector(vec,NuevoVec);
    MostarVector(NuevoVec);

    return 0;
}
