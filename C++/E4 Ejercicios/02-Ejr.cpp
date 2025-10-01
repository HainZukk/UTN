/*
Hacer un programa para ingresar una lista de 10 números y luego informar
cuántos de los números ingresados son primos. Se informa 1 resultado al final.
Ejercicio 2 - Guia Ciclos Combinados
*/

#include <iostream>
using namespace std;
int main (){

    int n , Primos = 0;

    cout << "Ingrese 10 numeros a continuacion";
    for (int i = 0; i < 10; i++){
        cout << "Ingrese el numero: " << i + 1 << endl;
        cin >> n;
        if (n > 1){
            int divisores = 0;
            for (int j = 1; j <= n; j++){
                if (n % j == 0){
                    divisores ++;
                }
            }
            if (divisores == 2){
                Primos ++;
            }
        }   
    }    

    cout << "La cantidad de primos es : " << Primos << endl;
    system("pause");
    return 0;
}