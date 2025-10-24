/*
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un número e informar la cantidad de veces que ese número aparece en el vector.
*/

#include <iostream>
using namespace std;

void Aparaciones(int vec[],int TAM){

    int apariciones = 0;
    int numero;

    cout <<"Ingrese 10 numeros a continuacion: " << endl;
    for (int i = 0; i < TAM; i++){
        cin >> vec[i];
    }
    
    cout << "Ingrese el numero a evaluar cantidad: " << endl;
    cin >> numero;

    for (int i = 0; i < TAM; i++){
        if (numero == vec[i]){
            apariciones ++;
        }
    }

    cout << "El numero ha aparecido un total de " << apariciones << endl;
    
}

int main(){

    const int TAM = 10;
    int vec[TAM];
    Aparaciones(vec,TAM);
    
    return 0;
}