/*
Dada una lista de 10 números, cargarlos en un vector. Luego contar y listar la cantidad de números pares que aparecen en el vector.
*/

#include <iostream>
using namespace std;

void Pares(int Vec[] , int TAM){

    int pares = 0 , aparicion = 0;

    cout << "Ingrese " << TAM << " de numeros a continuacion: "<< endl;
    for (int i = 0; i < TAM; i++){
        cin >> Vec[i];
    }

    cout << "\n Numeros pares encontrados: ";
    for (int i = 0; i < TAM; i++){
        if (Vec[i] % 2 == 0){
            cout << Vec[i] << endl;
            pares ++;
        }
        
    }
    cout << "Total de numeros pares encontrados: " << pares << endl;
}

int main(){

    const int TAMANIO = 10;
    int vec[TAMANIO];

    Pares(vec,TAMANIO);

    return 0;
}