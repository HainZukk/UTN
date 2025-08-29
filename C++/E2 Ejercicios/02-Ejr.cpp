/*
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo
*/

#include <iostream>
using namespace std;
int main (){


    int n1,n2;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    if (n2 == 0){
        cout << "El segundo numero no puede ser cero." << endl;
    }
    else if (n1 % n2 == 0)
    {
        cout << "El primer numero " << n1 << " es multiplo del segundo " << n2 << "." << endl;
    }
    else {
        cout << "El primer numero " << n1 << " no es multiplo del segundo " << n2 << "." << endl;
    }

    return 0;
}