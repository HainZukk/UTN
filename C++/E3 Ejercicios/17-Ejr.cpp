#include <iostream>
using namespace std;
int main (){
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    cout << "Los divisores de " << numero << " son: ";
    for (int i = 1; i <= numero; i++){
        if (numero % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
    
