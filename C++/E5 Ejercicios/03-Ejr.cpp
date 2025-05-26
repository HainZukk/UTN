#include <iostream>
using namespace std;

void EsPrimo(int numero){
    if(numero < 2){
        cout << "El numero"  <<numero<< "no es primo" << endl;
        return;
    }
    for (int i = 2; i * i <= numero; i++){
        if (numero % i == 0){
             cout << "El número " << numero << " no es primo." << endl;
            return;
        }
    }
        cout << "El número " << numero << " es primo." << endl;
}

int main(){
    int numero;
    cout << "Ingrese el numero: ";
    cin >> numero;

    EsPrimo(numero);

    return 0;
}