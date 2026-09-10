#include <iostream>
#include "herramientas.h"
#include "martillo.h"
#include "destornillador.h"
#include "taladro.h"
using namespace std;

int main(){
    herramientas h1(20,21.5);
    martillo m1(5,19.7,"Plana");
    destornillador d1(20,17,"Estrella");
    taladro t1(2.5,30.0,750.0);
    

    cout << "-----Prueba de Clase Madre-----" << endl;
    h1.mostrarInformacion();

    cout << endl;

    cout << "-----Prueba de Clase Hija Martillo-----" << endl;
    m1.mostrarInformacion();

    cout << endl;

    cout << "-----Prueba de Clase Hija Destornillador-----" << endl;
    d1.mostrarInformacion();

    cout << endl;

    std::cout << "\n-----Prueba de Clase Hija Taladro-----\n";
    t1.mostrarInformacion();
    

    return 0;
}