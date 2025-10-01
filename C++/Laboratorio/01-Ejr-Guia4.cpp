#include <iostream>
using namespace std;
int main(){

    /*
    Hacer un programa para ingresar una lista de 10 números y luego informar
    cuántos de los números ingresados son perfectos. Se informa 1 resultado al
    final.
    */

    int perfectos = 0;
    int num;

    for (int i = 0; i < 10; i++){
        cout << "Ingrese el numero " << (i + 1) << ": " << endl;
        cin >> num;
        int suma_divisores = 0;
        for (int j = 1; j < num; j++){
            if (num % j == 0){
                suma_divisores += j;
            }
        }
        if (suma_divisores == num && num != 0){
            perfectos++;
        }
    }

    cout << "Cantidad de numeros perfectos: " << perfectos << endl;

    return 0;
}