/*
Hacer una función que reciba un vector de enteros y su tamaño y luego muestre el vector ordenado de forma ascendente, tener en cuenta que el vector enviado como argumento no debe ser modificado.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

void mostrarOrdenado(const int Vec[],int TAM);
void mostrarVector(const int Vec[], int TAM);
void ordenar(int *V, int TAM);
void cargarVector(int Vec[],int TAM);

int main()
{
    /*Prueba
    int vector[] = {5, 2, 9, 1, 7};
    int tamanio = 5;*/

    // Tam dinamico
    int *numeros = nullptr;
    int tamanio;
    cout << "Ingrese el tamaño del vector: ";
    cin >> tamanio;

    numeros = new int[tamanio];

    if (numeros == nullptr){
        cout << "No hay memoria" << endl;
    }

    cargarVector(numeros,tamanio);
    
    system("clear"); 

    mostrarOrdenado(numeros, tamanio);

    cout << "Vector original (sin cambios): ";
    mostrarVector(numeros,tamanio);

    delete[] numeros;

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
    mostrarVector(copia, TAM);          

    delete[] copia;
}

void cargarVector(int Vec[],int TAM){

    cout << "Ingrese " << TAM << " numeros enteros: " << endl;
    for (int i = 0; i < TAM; i++){
        cin >> Vec[i];
    }
}

void mostrarVector(const int Vec[], int TAM){
    for (int i = 0; i < TAM; i++){
        cout << Vec[i] << " ";
    }
    cout << endl;
}