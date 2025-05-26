/*
Hacer una función llamada CalcularMaximo que determine el máximo entre dos números. La función debe recibir dos números enteros por valor y devolver el valor más grande. Si los números son iguales debe devolver cualquiera de los dos. La función no debe mostrar nada por pantalla. 
Hacer un programa para ingresar dos números y, utilizando CalcularMaximo, emita luego el número mayor de ambos.
*/

#include <iostream>
using namespace std;    


void CalcularMaximo(int num1, int num2, int &maximo) {
    if (num1 >= num2) {
        maximo = num1;
    } else {
        maximo = num2;
    }
}

int main(){

    int num1, num2, maximo;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    CalcularMaximo(num1,num2,maximo);

    cout << "El numero mayor es: " << maximo << endl;

    return 0;
}