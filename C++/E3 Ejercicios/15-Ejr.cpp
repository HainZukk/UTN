/*
Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos como crecientes. 
Por ejemplo si la lista fuera: 
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado” Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado” Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.
*/

#include <iostream>
using namespace std;
int main () {


    int num , anterior;
    bool ordenado = true;

    cout << "Ingrese el numero 1: ";
    cin >> anterior;

    for (int i = 2; i <= 8; i++)
    {
        cout << "Ingrese el numero: " << i << ": ";
        cin >> num;

        if (num < anterior)
        {
            ordenado = false;
        }
        anterior = num; 
    }
    if (ordenado) {
        cout << "Conjunto ordenado";
    }
    else {
        cout << "Conjunto no ordenado";
    }

    return 0;
}