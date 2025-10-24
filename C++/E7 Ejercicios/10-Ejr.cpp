/*
Dada una lista de 20 números, cargarlos en un vector. Determinar e informar la cantidad de “rupturas” que tiene el vector con respecto a un orden estrictamente creciente. Ejemplo: el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.
*/

#include <iostream>
using namespace std;

void ContarRupturas(int vec[], int TAM) {
    int rupturas = 0;

    for (int i = 0; i < TAM - 1; i++) {
        if (vec[i] >= vec[i + 1]) { 
            rupturas++;
        }
    }

    cout << "Cantidad de rupturas: " << rupturas << endl;
}

int main() {
    const int TAM = 20;
    int vec[TAM] = {1, 3, 4, 2, 4, 4, 6, 8, 1, 7, 9, 10, 11, 12, 13, 5, 6, 8, 9, 10};

    ContarRupturas(vec, TAM);

    return 0;
}
