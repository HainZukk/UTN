#include <iostream>
#include <string>
using namespace std;

void obtenerNaipe(int codigo, int &numero, string &palo) {
    if (codigo < 1 || codigo > 40) {
        cout << "Codigo invalido" << endl;
        return;
    }

    int indice = (codigo - 1) % 10 + 1;

    
    if (indice <= 7)
        numero = indice;
    else
        numero = indice + 2; 

    if (codigo <= 10)
        palo = "Espada";
    else if (codigo <= 20)
        palo = "Basto";
    else if (codigo <= 30)
        palo = "Copa";
    else
        palo = "Oro";
}

int main() {
    int codigo, numero;
    string palo;

    cout << "Ingrese el codigo del naipe (1-40): ";
    cin >> codigo;

    obtenerNaipe(codigo, numero, palo);

    if (codigo >= 1 && codigo <= 40) {
        cout << "Naipe: " << numero << " de " << palo << endl;
    }

    return 0;
}
