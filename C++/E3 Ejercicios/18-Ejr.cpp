#include <iostream>
using namespace std;
int main(){

    int num;
    int contador = 0;
    cout << "Ingrese el numero entero: ";
    cin >> num;

    cout << "Los divisores pares de " << num << " son: ";
    for (int i = 1; i <= num; i++){
        if (num % i == 0 && i % 2 == 0 ){
            cout << i << " ";
            contador++;
        }
        
    }
    if (contador == 0){
        cout << "Ninguno"; 
    }
    cout << endl;
    return 0;
}