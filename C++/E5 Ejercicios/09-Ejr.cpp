#include <iostream>
using namespace std;

void contarPerfectos() {
    int numero, cantidadPerfectos = 0;

    cout << "Ingrese numeros (0 para terminar):" << endl;
    cin >> numero;

    while (numero != 0) {
        int suma = 0;

        for (int i = 1; i < numero; i++) {
            if (numero % i == 0)
                suma += i;
        }

        if (suma == numero)
            cantidadPerfectos++;

        cin >> numero;
    }

    cout << "Cantidad de numeros perfectos ingresados: " << cantidadPerfectos << endl;
}

int main() {
    contarPerfectos();
    return 0;
}
