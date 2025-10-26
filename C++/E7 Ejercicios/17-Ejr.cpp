/*
Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el vector hay elementos repetidos y generar otro vector con los elementos repetidos reemplazados por ceros.
Ejemplo Vector 1: [8, 20, 20, -7, 15, 12, 15, -5, 11, 18]
Ejemplo Vector 2: [8, 0, 0, -7, 0, 12, 0, -5, 11, 18]
*/

#include <iostream>
using namespace std;

void Repetidos(int vec[], int vec2[], int TAM) {

    cout << "Ingrese los " << TAM << " numeros: " << endl;
    for (int i = 0; i < TAM; i++){
        cin >> vec[i];
    }

    for (int i = 0; i < TAM; i++){
        bool repetido = false;
        for (int j = 0; j < TAM; j++){
            if (i != j && vec[i] == vec[j]){
                repetido = true;
                break;
            }
        }
        if (repetido){
            vec2[i] = 0;
        }
        else{
            vec2[i] = vec[i];
        }   
    }
}

int main(){
    const int N = 10;
    int v[N] , v2[N];

    Repetidos(v,v2,N);
    cout << "Vector resultante: " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << v2[i] << " ";
    }
    
    return 0;
}
