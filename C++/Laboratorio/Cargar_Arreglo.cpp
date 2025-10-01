#include <iostream>
using namespace std;

void Cargar_Arreglo(int Mi_Arreglo[]){
    for (int i = 1; i < 15; i++){
        Mi_Arreglo[i] += i;
    }
}

int main (){
    // Inicializamos en 0 el Array/Vector porque si no toma valores del espacio de Memoria
    int mi_array[15] = {0};
    Cargar_Arreglo(mi_array);
    for (int i = 1; i < 15; i++) {
        cout << mi_array[i] << " ";
    }
    return 0;
}