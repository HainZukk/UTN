#include <iostream>
using namespace std;

int main() {
    int numeros[13];
    int ternasPositivos = 0;
    int ternasNegativosCrecientes = 0;

    cout << "Ingrese 13 numeros enteros:" << endl;
    
    for (int i = 0; i < 13; i++) {
        cin >> numeros[i];
    }

    
    for (int i = 0; i < 11; i++) {  
        if (numeros[i] > 0 && numeros[i + 1] > 0 && numeros[i + 2] > 0) {
            ternasPositivos++;
        }
    }

    
    for (int i = 0; i < 11; i++) {  
        if (numeros[i] < 0 && numeros[i + 1] < 0 && numeros[i + 2] < 0) {
            // Verificamos si están ordenados en forma creciente
            if (numeros[i] < numeros[i + 1] && numeros[i + 1] < numeros[i + 2]) {
                ternasNegativosCrecientes++;
            }
        }
    }

    
    cout << "Cantidad de ternas de valores positivos consecutivos: " << ternasPositivos << endl;
    cout << "Cantidad de ternas de valores negativos consecutivos y ordenados en forma creciente: " << ternasNegativosCrecientes << endl;

    return 0;
}
