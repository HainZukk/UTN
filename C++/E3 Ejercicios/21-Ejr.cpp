#include <iostream>
using namespace std;

int main() {
    int numero, suma_divisores = 0;

    cout << "Ingresá un número entero: ";
    cin >> numero;
    
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma_divisores += i;
        }
    }
    if (suma_divisores == numero) {
        cout << numero << " es un número perfecto." << endl;
    } else {
        cout << numero << " no es un número perfecto." << endl;
    }

    return 0;
}
