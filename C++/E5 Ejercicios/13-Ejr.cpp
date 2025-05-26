#include <iostream>
using namespace std;

void calcularPotencia(int base, int exponente, float &resultado) {
    resultado = 1.0f;

    if (exponente == 0) return;

    int exp = exponente > 0 ? exponente : -exponente;

    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }

    if (exponente < 0)
        resultado = 1.0f / resultado;
}

int main() {
    int b, e;
    float res;

    cout << "Ingrese base: ";
    cin >> b;
    cout << "Ingrese exponente: ";
    cin >> e;

    calcularPotencia(b, e, res);

    cout << b << " elevado a " << e << " = " << res << endl;

    return 0;
}
