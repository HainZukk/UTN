/*
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el menor de los impares y el mayor de los pares. Suponer que habrá al menos un número par y uno impar.
*/

#include <iostream>
using namespace std;

void Pares(int numeros[] , int TAM){

    int mayorPar = 0;
    int menorImpar = 0;

    for (int i = 0; i < TAM; i++){
        if (numeros[i] % 2 == 0 && numeros[i] > mayorPar){
            mayorPar = numeros[i];
        }
        else if (numeros[i] % 2 != 0 && numeros[i] < menorImpar){
            menorImpar = numeros[i];
        }   
    }
    
    cout << "El mayor de los pares es: " << mayorPar << endl;
    cout << "El menor de los impares es: " << menorImpar << endl;
}

int main(){

    const int TAM = 5;
    int numeros[TAM] = {-1,2,4,6,8};

    Pares(numeros , TAM);

    return 0;
}