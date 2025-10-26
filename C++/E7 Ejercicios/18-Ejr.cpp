/*
Dada una lista de 10 números, cargarlos en un vector. Luego ingresar dos números a y b menores a 10. Determinar e informar cuál es el valor máximo en el vector considerando los elementos que están entre las posiciones a y b.
*/

#include <iostream>
using namespace std;

int MaximoEnRango(int vec[] , int a , int b){

    if (a > b){
        int temp = a;
        a = b;
        b = temp;
    }

    int maximo = vec[a];
    for (int i = a + 1; i <= b; i++){
        if (vec[i] > maximo){
            maximo = vec[i];
        }
        
    }
    return maximo;
}

int main(){

    const int N = 10;
    int v[N];
    int a , b;

    cout << "Ingrese " << N << " numeros:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }

    cout << "Ingrese la posicion 'a' (menor que 10): ";
    cin >> a;

    cout << "Ingrese la posicion 'b' (menor que 10): ";
    cin >> b;

    int resultado = MaximoEnRango(v,a,b);
    cout << "\nEl valor maximo entre las posiciones " << a << " y " << b << " es: " << resultado << endl;


    return 0;
}