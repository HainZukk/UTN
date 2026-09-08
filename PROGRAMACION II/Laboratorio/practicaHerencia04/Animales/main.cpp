#include <iostream>
#include "animales.h"
#include "gato.h"
#include "perro.h"
#include "pajaro.h"
using namespace std;
int main(){

    gato g;
    perro p;
    pajaro a;

    g.setNombre("Huynh");
    g.setPeso(23.1);
    g.araniar();
    g.maullar();

    cout << endl;

    p.setNombre("Nadina");
    p.setPeso(2);
    p.setRaza("Bulldog");
    p.morder();
    p.ladrar();

    cout << endl;

    a.setNombre("Vanesa");
    a.setPeso(99);
    a.setColor("Negra");
    a.cantar();
    a.volar();



    return 0;
}