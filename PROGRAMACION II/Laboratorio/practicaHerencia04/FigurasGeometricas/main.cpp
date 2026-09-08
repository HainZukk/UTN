#include <iostream>
#include "cuadrado.h"
#include "rectangulo.h"
#include "circulo.h"
using namespace std;

int main(){
    // Cuadrado c1;
    // Rectangulo r1;
    // Circulo o1;

    Cuadrado c1("Rojo",3);
    Circulo o1("Negro",4);
    Rectangulo r1("Azul",4,3);

    cout << "-----Cuadrado-----\n";
    // c1.setColor("Rojo");
    // c1.setLado(5);
    c1.mostrar();

    cout << endl;
    
    cout << "-----Rectangulo-----\n";
    // r1.setColor("Azul");
    // r1.setBase(4);
    // r1.setAltura(6);
    r1.mostrar();

    cout << endl;

    cout << "-----Circulo-----\n";
    // o1.setColor("Negro");
    // o1.setRadio(3);
    o1.mostrar();


    return 0;
}