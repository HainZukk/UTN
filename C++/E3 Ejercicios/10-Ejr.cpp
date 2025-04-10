#include <iostream>
using namespace std;
int main () {

    int num;
    int maximo;
    int posicion_max = 0;

    cout << "Ingrese 10 numeros:\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> num;

        if (i == 1 || num > maximo)
        {
            maximo = num;
            posicion_max = i;
        }
        
    }


    cout << "\nMáximo: " << maximo << endl;
    cout << "Posición: " << posicion_max << endl;

    return 0;
}