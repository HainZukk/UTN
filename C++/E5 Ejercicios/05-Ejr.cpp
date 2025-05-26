#include <iostream>
using namespace std;

void Redondear(float numero) {
    int redondeado;
    if (numero - int(numero) >= 0.5)
        redondeado = int(numero) + 1;
    else
        redondeado = int(numero);

    cout << "El número redondeado es: " << redondeado << endl;
}

int main() {
    float numero;
    cout << "Ingrese un número con decimales: ";
    cin >> numero;

    Redondear(numero);

    return 0;
}
