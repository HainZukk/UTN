#include <iostream>
using namespace std;
int main(){
    
    const int TAMANIO = 10;
    int usuarios[TAMANIO] = {0};
    int num;
    int i = 0;

    cout << "Ingrese el numero o 'cero' para terminar" << endl;
    cin >> num;

    while (num != 0 && i < TAMANIO){
        usuarios[i] = num;
        i++;

        cout << "Ingrese el numero o 'cero' para terminar" << endl;
        cin >> num;
    }

    // Mostramos los numeros hasta 'i' ya que si utilizamos 'TAMANIO' (Arreglo completo muestra datos basura y no nos sirve) 
    for (int j = 0; j < i ; j++){
        cout << usuarios[j];
    }


    return 0;
}