/*
Hacer una función que reciba un vector de enteros y su tamaño y luego muestre el vector ordenado de forma ascendente, tener en cuenta que el vector enviado como argumento no debe ser modificado.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

void mostrarOrdenado(const int Vec[],int TAM);
void ordenar(int *V, int TAM);

int main()
{
    /*Prueba
    int vector[] = {5, 2, 9, 1, 7};
    int tamanio = 5;*/

    // Tam dinamico
    int *vector = nullptr;
    int tamanio;
    cout << "Ingrese el tamaño del vector: ";
    cin >> tamanio;

    vector = new int[tamanio];

    if (vector == nullptr){
        cout << "No hay memoria" << endl;
    }

    cout << "Ingrese " << tamanio << " numeros enteros: " << endl;
    for (int i = 0; i < tamanio; i++){
        cin >> vector[i];
    }
    
    system("clear"); 

    mostrarOrdenado(vector, tamanio);

    cout << "Vector original (sin cambios): ";
    for (int i = 0; i < tamanio; i++)
        cout << vector[i] << " ";
    cout << endl;

    delete[] vector;

    return 0;
}

//Ordenamiento por seleccion Pagina 2/4 . Apunte de Vectores y Matrices
void ordenar(int *V, int TAM){

    int i,j,posMin,aux;

    for (i = 0; i < TAM-1; i++){
        posMin = i;
        for (j = i + 1; j < TAM ; j++){
            if (V[j] < V[posMin]){
                posMin = j;
            }
        }
        aux = V[i];
        V[i] = V[posMin];
        V[posMin] = aux;
    }
}

void mostrarOrdenado(const int Vec[],int TAM){

    int *copia = new int[TAM];

    for (int i = 0; i < TAM; i++){
        copia[i] = Vec[i];
    }

    ordenar(copia,TAM);

    cout << "Vector ordenado: ";
    for (int i = 0; i < TAM; i++){
    cout << copia[i] << " ";
    }
    cout << endl;             

    delete[] copia;
}