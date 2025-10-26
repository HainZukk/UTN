#include <iostream>
using namespace std;


bool ContarPrimos(int n){
    int divisores = 0;

    if (n <= 0){
        return false;
    }

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            divisores ++;
        }
    }
    return divisores == 2;
}

int main(){

    const int TAMANIO = 10;
    int vec[TAMANIO];
    int contador_primos = 0;

    cout << "Ingrese los " << TAMANIO << " numeros" << endl;
    for (int i = 0; i < TAMANIO; i++){
        cin >> vec[i];
    }

    for (int i = 0; i < TAMANIO; i++){
        if (ContarPrimos(vec[i])){
            contador_primos ++;
        }
    }
    
    cout << "La cantidad de primos es: " << contador_primos << endl;

    return 0;
}