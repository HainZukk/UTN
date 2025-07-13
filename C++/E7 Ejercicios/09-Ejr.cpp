//Dada una lista de 20 números enteros, cargarlos en un vector. Determinar e informar con un cartel aclaratorio si el vector está ordenado estrictamente en forma creciente. Por ejemplo: el vector [1, 3, 5, 7, 9] está ordenado estrictamente. El vector [1,  5,  3,  7] no lo está.

#include <iostream>
using namespace std;
int main (){

    const int n = 20;
    int numeros[n];
    bool ordenado = true;

    cout << "Ingrese 20 numeros enteros:\n";
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < n - 1; i++){
        if (numeros[i] >= numeros[i + 1]){
            ordenado = false;
            break;
        }
    }
    
    if (ordenado) {
        cout << "\nEl vector esta ORDENADO estrictamente en forma creciente.\n";
    } else {
        cout << "\nEl vector NO esta ordenado estrictamente en forma creciente.\n";
    }

    return 0;
}