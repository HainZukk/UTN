/*Hacer un programa para ingresar tres números y listar el máximo de ellos.*/

#include <iostream>
using namespace std;
int main (){

    int n1,n2,n3,maximo;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    maximo = n1;

    if (n2 > maximo ){
        maximo = n2;
    }
    if (n3 > maximo)
    {
        maximo = n3;
    }

    cout << "El numero maximo es: " << maximo << endl;


    return 0;
}