/*
Hacer una función llamada EsPrimoSophieGermain que reciba un número entero y determine si el mismo es un número primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1 → 5 es primo.

Hacer un programa para ingresar un número y, utilizando EsPrimoSophieGermain, emita luego un cartel indicando si el número ingresado es primo Sophie Germain o no lo es.

*/

#include <iostream>
using namespace std;

bool EsPrimo(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

bool EsPrimoSophieGermain(int n){

    if (EsPrimo(n) && EsPrimo(2*n+1)){
        return true;
    }
    else{
        return false;
    }
    
}


int main(){

    int n;

    cout << "Ingrese un numero: " << endl;
    cin >> n;
    
    if (EsPrimoSophieGermain(n)){
        cout << n << " es un número primo de Sophie Germain" << endl;
    }
    else{
        cout << n << " no es un número primo de Sophie Germain" << endl;
    }

    return 0;
}