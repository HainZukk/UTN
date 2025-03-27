/*
Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.
*/

#include <iostream>
using namespace std;
int main (){

    int numero;

    cout << "Ingrese un numero para verificar si es par: ";
    cin >> numero;

    if (numero % 2 == 0){
        cout << "El numero ingresado es par";
    }
    else {
        cout << "El numero ingresafo no es par";
    }


    return 0;
}