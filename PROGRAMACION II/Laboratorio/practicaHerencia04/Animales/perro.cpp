#include <iostream>
using namespace std;
#include "perro.h"

void perro::setRaza(string raza){
    _raza = raza;
}

string perro::getRaza(){
    return _raza;
}

void perro::ladrar(){
    cout << "Gouf Gouf" << endl;
}

void perro::morder(){
    cout << "El perro muerde y te saca una pierna" << endl;
}



