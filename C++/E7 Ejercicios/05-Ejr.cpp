//Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el menor de los impares y el mayor de los pares. Suponer que habrá al menos un número par y uno impar.

#include <iostream>
using namespace std;
int main (){

    const int N = 10;
    int Numeros[10];
    int MenorImpar;
    int MayorPar;
    bool PrimerImpar = true;
    bool PrimerPar = true;

    cout << "Ingrese 10 numeros: " << endl;
    for (int i = 0; i < N; i++){
        cout << "Número " << i + 1 << ": ";
        cin >> Numeros[i]; 

        if (Numeros[i] % 2 == 0){
            if (PrimerPar){
                MayorPar = Numeros[i];
                PrimerPar = false;
            }
            else if (Numeros[i] > MayorPar){
                MayorPar = Numeros[i];
            }
        }
        else{
            if (PrimerImpar){
                MenorImpar = Numeros[i];
                PrimerImpar = false;
            }
            else if (Numeros[i] < MenorImpar){
                MenorImpar = Numeros[i];
            }
        }
        
    }

        cout << "El menor número impar es: " << MenorImpar << endl;
        cout << "El mayor número par es: " << MayorPar << endl;


    return 0;
}