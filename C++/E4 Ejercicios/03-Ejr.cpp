/*
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero y luego informar el porcentaje de números primos y el
porcentaje de números no primos. Se informan 2 resultados al final.
Ejercicio 3 - Guia 4 Ciclos Combinados
*/

#include <iostream>
using namespace std;

int main() {
    int n, primos = 0, noprimos = 0, total = 0;

    cout << "Ingrese los numeros y para finalizar '0': " << endl;
    cin >> n;

    while (n != 0) {
        total++;
        if (n > 1) {
            int divisores = 0;
            for (int i = 1; i <= n; i++) {
                if (n % i == 0) {
                    divisores++;
                }
            }
            if (divisores == 2) {
                primos++;
            } else {
                noprimos++;
            }
        } 
        else {
            noprimos++;
        }
        cin >> n;
    }

    if (total > 0) {
        cout << "El porcentaje de numeros primos es: " << float(primos * 100) / total << "%" << endl;
        cout << "El porcentaje de numeros no primos es: " << float(noprimos * 100) / total << "%" << endl;
    } else {
        cout << "No se ingresaron numeros" << endl;
    }

    system("pause");
    return 0;
}