// Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor máximo absoluto del vector. Por ejemplo 20, -43 y 5, el máximo absoluto es -43.

#include <iostream>
using namespace std;
int main(){

    // Declaramos el vector en constante y las variables a utilizar
    const int N = 10;
    int Numeros[N];
    int maximoAbsoluto;
    int valorAbsolutoMaximo;
    int valorActual;


    cout << "Ingrese 10 numeros(Pueden ser negativos): " << endl;

    for (int i = 0; i < N; i++){
        cout << "Numero " << i + 1 <<": " ;
        cin >> Numeros[i];
    }


    if (Numeros[0] < 0){
        valorAbsolutoMaximo = -Numeros[0];
    }
    else{
        valorAbsolutoMaximo = Numeros[0];
    }

    maximoAbsoluto = Numeros[0];

    for (int i = 0; i < N; i++){
        if (Numeros[i] < 0){
            valorActual = -Numeros[i];
        }
        else{
            valorActual = Numeros[i];
        }
        if (valorActual > valorAbsolutoMaximo){
            valorAbsolutoMaximo = valorActual;
            maximoAbsoluto = Numeros[i];
        }
        
    }
    cout << "El valor con mayor valor absoluto es: " << maximoAbsoluto << endl;
    

    return 0;
}