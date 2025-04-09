#include <iostream>
using namespace std;
int main(){

    int N , numero , positivos = 0;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;


    for (int i = 1; i <= N; i++)
    {
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;

        if (numero > 0)
        {
            positivos ++;
        }
    }

    cout << "Cantidad de Positivos: " << positivos << endl;
    
    return 0;
}