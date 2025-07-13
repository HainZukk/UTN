// Hacer un programa para llenar un vector de 10 elementos con el formato: 1, 0, 1, 0, 1, 0, 1, 0, 1, 0. Luego mostrar los números por pantalla. EL USUARIO NO INGRESA NINGÚN VALOR EN ESTE PROGRAMA.

#include <iostream>
using namespace std;
int main(){

    const int N = 10;
    int numeros[N];

    for (int i = 0; i <= N; i++){
        if (i % 2 == 0){
            numeros[i] = 1;
        }
        else {
            numeros[i] = 0;
        }
    }
    
    cout << "Contenido del Vector " << endl;
    for (int i = 0; i < N; i++){
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}


