#include <iostream>
using namespace std;

void contarDigitos(int numero, int &cantidad) {
    cantidad = 0;

    if (numero == 0) {
        cantidad = 1;
        return;
    }

    if (numero < 0)
        numero = -numero;

    while (numero != 0) {
        numero /= 10;
        cantidad++;
    }
}

int main() {
    int numero, cantidad;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    contarDigitos(numero, cantidad);

    cout << "El numero tiene " << cantidad << " digito(s)." << endl;

    return 0;
}
