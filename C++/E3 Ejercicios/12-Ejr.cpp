#include <iostream>
using namespace std;

int main() {
    int numero;
    int maximoNegativo;
    int minimoPositivo;
    int primerNegativo = 1;
    int primerPositivo = 1;

    cout << "Ingrese 10 números:\n";

    for (int i = 1; i <= 10; i++) {
        cout << "Número " << i << ": ";
        cin >> numero;

        if (numero < 0) {
            if (primerNegativo == 1) {
                maximoNegativo = numero;
                primerNegativo = 0;
            } else if (numero > maximoNegativo) {
                maximoNegativo = numero;
            }
        }

        if (numero > 0) {
            if (primerPositivo == 1) {
                minimoPositivo = numero;
                primerPositivo = 0;
            } else if (numero < minimoPositivo) {
                minimoPositivo = numero;
            }
        }
    }

    cout << "\nResultados:\n";

    if (primerNegativo == 0) {
        cout << "Máximo negativo: " << maximoNegativo << endl;
    } else {
        cout << "No se ingresaron números negativos.\n";
    }

    if (primerPositivo == 0) {
        cout << "Mínimo positivo: " << minimoPositivo << endl;
    } else {
        cout << "No se ingresaron números positivos.\n";
    }

    return 0;
}
