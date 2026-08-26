/*
Escribir un programa que solicite al usuario el tamaño de un array de enteros, lo cree dinámicamente utilizando new. El usuario debe poder cargar el array y mostrarlo, y luego liberar la memoria con delete
*/

#include <iostream>
using namespace std;
int main(){

    int tamanio;
    int *array = nullptr;

    //Solicitar el tamanio del array
    cout << "Ingrese el tamaño del array: " << endl;
    cin >> tamanio;

    while (tamanio <= 0){
        cout << "El tamaño del array no puede ser menor o igual a cero" << endl;
        cin >> tamanio;
    }

    array = new int[tamanio];

    if (array == nullptr){
        cout << "No hay memoria" << endl;
    }
    
    
    for (int i = 0; i < tamanio; i++){
        cout << "Ingrese el item: " << i + 1<< endl;
        cin >> array[i];
    }

    // Mostrar los valores de nuestro array
    for (int j = 0; j < tamanio; j++){
        cout << array[j] << endl;
    }

    //liberacion de memoria 
    delete[] array;    
    

    return 0;
}