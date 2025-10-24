#include <iostream>
using namespace std;

int main() {
    int n;
    int gruposCumplen = 0;
    bool fin = false;

    cout << "Ingrese los numeros (finaliza con 0 0): " << endl;
    cin >> n;  // Primer número

    while (!fin) {
        bool ordenado = true;
        bool hayImpar = false;
        int ultimoImpar = 0;

        // Procesar un grupo hasta encontrar un 0
        while (n != 0) {
            if (n % 2 != 0) { // Si es impar
                if (!hayImpar) {
                    ultimoImpar = n;
                    hayImpar = true;
                } else {
                    // Si rompe el orden (mayor que el anterior)
                    if (n > ultimoImpar)
                        ordenado = false;
                    ultimoImpar = n;
                }
            }
            cin >> n; // Leer siguiente número
        }

        // Fin del grupo
        if (hayImpar && ordenado)
            gruposCumplen++;

        cin >> n;
        if (n == 0)
            fin = true;
    }

    cout << "Cantidad de grupos con impares ordenados de mayor a menor: "
         << gruposCumplen << endl;

    return 0;
}
