#include <iostream>
using namespace std;

int main () {
    int totalPositivos = 0; 

    for (int i = 1; i <= 10; i++) {
        cout << "\nIngrese los numeros para grupo: " << i << " (termina con 0)" << endl;

        int n, maxPar = 0, maxImpar = 0;
        int positivos = 0, negativos = 0, total = 0;

        while (true) {
            cin >> n;         
            if (n == 0) break;

            // a) máximos
            if (n % 2 == 0) {
                if (n > maxPar) maxPar = n;
            } else {
                if (n > maxImpar) maxImpar = n;
            }

            // b) positivos y negativos
            if (n > 0) {
                positivos++;
                totalPositivos++;
            } else {
                negativos++;
            }

            total++;
        }

        // --- resultados del grupo ---
        if (maxPar != 0)
            cout << "Maximo par: " << maxPar << endl;
        else
            cout << "Maximo par: (no hay)" << endl;

        if (maxImpar != 0)
            cout << "Maximo impar: " << maxImpar << endl;
        else
            cout << "Maximo impar: (no hay)" << endl;

        if (total > 0) {
            cout << "Porcentaje positivos: " << (positivos * 100.0 / total) << "%" << endl;
            cout << "Porcentaje negativos: " << (negativos * 100.0 / total) << "%" << endl;
        } else {
            cout << "Grupo vacio." << endl;
        }
    }

    cout << "\nCantidad total de positivos en los 10 grupos: " << totalPositivos << endl;

    return 0;
}
