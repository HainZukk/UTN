#include <iostream>
using namespace std;
int main (){

    int Numeros[3];
    int positivos = 0;


    for (int i = 0; i < 3; i++){
        cout << "Ingrese el numero: " << i + 1 << endl;
        cin >> Numeros[i];

        if (Numeros[i] > 0){
            positivos++;
        }
    }
    cout << "La cantidad de positivos es: " << positivos << endl;
    return 0;
}