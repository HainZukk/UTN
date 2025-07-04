#include <iostream>
using namespace std;
int main(){

    int N = 10;
    int numeros[N];
    int suma = 0;
    float promedio;


    for (int i = 0; i < N; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    promedio = suma / (float)N;
    cout << "\nEl promedio es: " << promedio << endl;
    
    
    cout << "Numeros mayores al promedio:\n";
    for (int i = 0; i < N; i++){
        if (numeros[i] > promedio){
            cout << numeros[i] << " ";
        }
    }
    cout << endl;
    return 0;
}