//Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor máximo y su posición dentro del vector.

#include <iostream>
using namespace std;
int main(){


    const int N = 10;
    int Numeros[N];
    int maximo;
    int posicion;

    // Aqui itereamos con un for para pedir un input de 10 numeros al usuario
    cout << "Ingrese 10 numeros para guardar en el Vector" << endl;
    for (int i = 0; i < N; i++){
        cout << "Numero " << i + 1 <<": "; 
        cin >> Numeros[i];
    }

    maximo = Numeros[0];
    posicion = 0;

    for (int i = 0; i < N; i++){
        if (Numeros[i] > maximo){
            maximo = Numeros[i];
            posicion = i + 1;
        }
        
    }
    

    cout << "El valor máximo es: " << maximo << endl;
    cout << "Se encuentra en la posición: " << posicion << endl;

    return 0;
}