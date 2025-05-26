#include <iostream>
using namespace std;

void EsPrimoSophieGermain(int n) {
    if (n < 2) {
        cout << "El número " << n << " no es un primo de Sophie Germain." << endl;
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "El número " << n << " no es un primo de Sophie Germain." << endl;
            return;
        }
    }

    int dobleMasUno = 2 * n + 1;

    for (int i = 2; i * i <= dobleMasUno; i++) {
        if (dobleMasUno % i == 0) {
            cout << "El número " << n << " no es un primo de Sophie Germain." << endl;
            return;
        }
    }
    cout << "El número " << n << " es un primo de Sophie Germain." << endl;
}

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    EsPrimoSophieGermain(numero);

    return 0;
}
