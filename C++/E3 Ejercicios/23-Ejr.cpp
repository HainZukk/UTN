/*
Dada una lista de 10 números enteros informar la cantidad de duplas de números impares que se hayan ingresado consecutivamente. 
Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5. 

En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo tanto se informará que hay 4 duplas de números impares ingresados consecutivamente.

Ejemplo B: 3, 5, 7, 10, 3, 5, 7, 10, 3, 5.
En esta lista las duplas son: 3:5, 5:7, 3:5, 5:7, 3:5 por lo tanto se informará que hay 5 duplas de números impares ingresados consecutivamente.

Aclaración: Sólo hay que listar la cantidad de duplas de impares. No hay que mostrar cómo están compuestas las duplas de números.

*/

#include <iostream>
using namespace std;
int main (){

    int numeros[10];
    int duplas_impares = 0;

    cout << "Ingrese 10 numeros enteros: " << endl;
    for (int i = 0; i < 10; i++)
    {
    cin >> numeros[i];
    }

    for (int i = 0; i < 9; i++)
    {
        if (numeros[i] % 2 == 0 && numeros[i + 1] % 2 != 0)
        {
            duplas_impares ++;
        }
        
    }   
    
    cout << "Cantidad de duplas de numeros impares consecutivos: " << duplas_impares << endl;

    return 0;
} 

