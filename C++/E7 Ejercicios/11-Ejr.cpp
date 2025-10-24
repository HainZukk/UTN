/*
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un número e informar el primer índice donde ese número aparece en el vector. En caso de no aparecer se mostrará el valor índice igual a -1.
*/

#include <iostream>
using namespace std;


void Indice(int vec[] , int TAM){

    int numero;
    int indice = -1;

    cout << "Ingrese 10 numeros a continuacion: " << endl;
    for (int i = 0; i < TAM; i++){
        cin >> vec[i];
    }

    cout << "Ingrese el numero que quiere buscar: " << endl;
    cin >> numero;


    for (int i = 0; i < TAM; i++){
        if (vec[i] == numero){
            indice = i;
            break;
        }
        
    }
    cout << "El numero " << numero << "se encuentra en el indice " << indice << endl;
}

int main(){

    const int TAM = 10;
    int Vec[TAM];
    Indice(Vec,TAM);

    return 0;
}