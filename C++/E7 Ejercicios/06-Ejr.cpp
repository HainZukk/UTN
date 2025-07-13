// Leer 10 números y guardarlos en un vector. Determinar e informar los dos últimos números pares en el vector y sus respectivas posiciones en el mismo. Suponer que habrá al menos dos números pares.

#include <iostream>
using namespace std;
int main (){

    const int N = 10;
    int numeros[N];
    int pares[2];        
    int posiciones[2];   
    int encontrados = 0;

    cout << "Ingrese 10 numeros " << endl;
    for (int i = 0; i < N; i++){
        cout << "Numero: " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = N - 1; i >= 0 && encontrados < 2; i--){
        if (numeros[i] % 2 == 0){
            pares[encontrados] = numeros[i];
            posiciones[encontrados] = i + 1;
            encontrados ++;
        }
    }
    
    cout << "\nLos dos ultimos numeros pares encontrados fueron:\n";
    cout << "1) " << pares[1] << " en la posicion " << posiciones[1] << endl;
    cout << "2) " << pares[0] << " en la posicion " << posiciones[0] << endl;


    return 0;
}