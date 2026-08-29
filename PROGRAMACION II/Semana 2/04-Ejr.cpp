/*
Hacer una función que reciba un vector de enteros y su tamaño y devuelva la cantidad de números distintos que se repiten en el vector.
*/

#include <iostream>
using namespace std;

void cargarArray(int vec[], int TAM);
int contarRepetidos(int vec[], int TAM);
void mostrar(int vec[], int TAM);


int main(){

    const int TAM = 10;
    int numeros[TAM] = {0};
    int resultado = 0;

    cargarArray(numeros, TAM);
    mostrar(numeros, TAM);

    resultado = contarRepetidos(numeros, TAM);

    cout << "\nCantidad de numeros distintos que se repiten: " << resultado << endl;

    return 0;

}

void cargarArray(int vec[], int TAM){
    cout << "Ingrese los numeros: " << endl;
    for (int i = 0; i < TAM; i++){
        cout << "Ingrese el " << i + 1 << " numero: ";
        cin >> vec[i];
    }
}

int contarRepetidos(int vec[], int TAM) {

    int contador = 0;

    //Pedimos memoria dinamica para marcar los valores ya contados
    int *vecAuxiliar = new int[TAM];
    for (int i = 0; i < TAM; i++) {
        vecAuxiliar[i] = 0;
    }

    for (int i = 0; i < TAM; i++) {

        bool yaContado = false;
        for (int k = 0; k < i; k++) {
            if (vec[k] == vec[i]) {
                yaContado = true;
            }
        }

        if (!yaContado) {
            for (int j = i + 1; j < TAM; j++) {
                if (vec[i] == vec[j]) {
                    contador++;
                    vecAuxiliar[i] = 1;
                    break; 
                }
            }
        }
    }

    delete[] vecAuxiliar;

    return contador;
}

void mostrar(int vec[], int TAM){

    cout << "-----Vector cargado-----\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Indice " << i << ": " << vec[i] << endl;
    }
}
