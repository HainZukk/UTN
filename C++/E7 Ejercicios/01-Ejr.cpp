/*
Hacer un programa para ingresar 10 números y guardarlos en un vector. Determinar e informar cuál es la suma de los valores del vector.
*/

#include <iostream>
using namespace std;

void SumaValores(int Nums[10]){

    int suma = 0;

    for (int i = 0; i < 10; i++){
        cout << "Ingrese el numero" << i + 1 << " : " << endl;
        cin >> Nums[i];
        suma += Nums[i];
    }
    cout << "La suma del vector es de: " << suma << endl;

}

int main(){

    int Nums[10];
    SumaValores(Nums);

    return 0;
}