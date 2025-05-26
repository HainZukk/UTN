/*
Hacer una función llamada EsPar que determine si un número es par o no. La función debe recibir un número entero por valor y devolver true si es par o false si no lo es. La función no debe mostrar nada por pantalla. 
Hacer un programa para ingresar un número y, utilizando EsPar, emita luego un cartel indicando si el número ingresado es par o no es par.
*/

#include <iostream>
using namespace std;


void EsPar(int numero, bool resultado){
    if (numero % 2 == 0){
        resultado = true;
        cout << "El numero " << numero << " es par." << endl;
    } else {
        resultado = false;
        cout << "El numero " << numero << " no es par." << endl;
    }
}

int main(){
    int numero;
    bool resultado;
    cout << "Ingrese un numero: ";
    cin >> numero;
    EsPar(numero, resultado);

    return 0;
}