#include <iostream>
using namespace std;
int main (){

    int var , *punt;

    var = 15;
    punt = &var; // almacenamos direecion de memoria mediante ampersand.

    cout << "Direccion de memoria de puntero: " << punt << endl; 
    cout << "El valor var es: " << *punt << endl; // accedemos mediante * los datos de nuestro puntero

    *punt = 20; // ahora modificamos el valor de nuestra variable var con el uso de nuestor puntero.

    cout << "valor actualizado: " << *punt << endl; // mostramos el valor actualizado del puntero con *.

    return 0;
}