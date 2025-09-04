#include <iostream>
using namespace std;
int main(){

    int numero;
    int positivos = 0, negativos = 0;

    cout << "Ingrese numeros ('0' para terminar)" << endl;
    while (true){
        cin >> numero;
        if (numero == 0){
            break;
        }
        else if (numero > 0){
            positivos++;
        }
        else{
            negativos++;
        }

    }
    
    cout << "Los positivos son: " << positivos << endl;
    cout << "Los negativos son: " << negativos << endl;

    return 0;
}