#include <iostream>
using namespace std;

void EsBisiesto(int anio, int &contador) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << anio << " es bisiesto." << endl;
        contador++;
    } else {
        cout << anio << " no es bisiesto." << endl;
    }
}

int main() {
    int anio;
    int contador = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese el año #" << i << ": ";
        cin >> anio;
        EsBisiesto(anio, contador);
    }

    cout << "Cantidad de años bisiestos ingresados: " << contador << endl;

    return 0;
}
