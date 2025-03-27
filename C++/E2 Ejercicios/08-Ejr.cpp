/*
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar qué tipo de triángulo es: 
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.
*/

#include <iostream>
using namespace std;
int main (){

    int lado1,lado2,lado3;
    cout << "Ingrese la longitud del primer lado: ";
    cin >> lado1;

    cout << "Ingrese la longitud del segundo lado: ";
    cin >> lado2;

    cout << "Ingrese la longitud del tercer lado: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "El triángulo es Equilátero (los tres lados son iguales)." << endl;
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        cout << "El triángulo es Isósceles (dos lados son iguales)." << endl;
    } else {
        cout << "El triángulo es Escaleno (todos los lados son distintos)." << endl;
    }

    return 0;
}