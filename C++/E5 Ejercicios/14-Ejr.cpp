#include <iostream>
using namespace std;

void esNumeroArmstrong(int num, int &esArmstrong) {
    int original = num;
    int suma = 0;
    int cifras = 0;
    int temp = num;

    // Contar cantidad de cifras
    while (temp > 0) {
        cifras++;
        temp /= 10;
    }

    temp = num;
    suma = 0;
    while (temp > 0) {
        int digito = temp % 10;

        // Calcular digito^cifras sin pow
        int potencia = 1;
        for (int i = 0; i < cifras; i++) {
            potencia *= digito;
        }

        suma += potencia;
        temp /= 10;
    }

    if (suma == original) {
        esArmstrong = 1;
    } else {
        esArmstrong = 0;
    }
}

int main() {
    int n, resultado;

    cout << "Ingrese un número: ";
    cin >> n;

    esNumeroArmstrong(n, resultado);

    if (resultado == 1)
        cout << n << " es un número Armstrong." << endl;
    else
        cout << n << " NO es un número Armstrong." << endl;

    return 0;
}
