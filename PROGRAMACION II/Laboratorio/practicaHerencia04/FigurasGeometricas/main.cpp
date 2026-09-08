#include <iostream>
#include "cuadrado.h"
#include "rectangulo.h"
using namespace std;

int main(){
    Rectangulo r1;
    Cuadrado c1;

    cout << "-----Cuadrado-----\n";
    c1.setColor("Rojo");
    c1.setLado(5);
    c1.mostrar();

    cout << endl;
    
    cout << "-----Rectangulo-----\n";
    r1.setColor("Azul");
    r1.setBase(4);
    r1.setAltura(6);
    r1.mostrar();

    return 0;
}