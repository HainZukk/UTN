/*Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.*/


#include <iostream>
using namespace std;
int main (){

    int n1,n2,n3,n4,n5,maximo,minimo;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    cout << "Ingrese el cuarto numero: ";
    cin >> n4;

    cout << "Ingrese el quinto numero: ";
    cin >> n5;

    maximo = minimo = n1;

    if (n2 > maximo) {
        maximo = n2;
    }
    if (n2 < minimo) {
        minimo = n2;
    }

    if (n3 > maximo) {
        maximo = n3;
    }
    if (n3 < minimo) {
        minimo = n3;
    }

    if (n4 > maximo) {
        maximo = n4;
    }
    if (n4 < minimo) {
        minimo = n4;
    }

    if (n5 > maximo) {
        maximo = n5;
    }
    if (n5 < minimo) {
        minimo = n5;
    }

    cout << "El numero maximo es: " << maximo << endl;
    cout << "El numero minimo es: " << minimo << endl;
 

    return 0;
}