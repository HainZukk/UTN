/*
Hacer un programa que muestre los números primos entre el 1 y el 10000. El usuario no debe ingresar nada en este programa.
*/

#include <iostream>
using namespace std;
int main (){

    for (int i = 2; i < 10000; i++)
    {
        if (i % 2 == 0) {cout << i << endl;} 
    }

    return 0;
}