#include <iostream>
using namespace std;
#include "pajaro.h"

//Setters
void pajaro::setColor(string color){
    _color = color;
}
//Getters
string pajaro::getColor(){
    return _color;
}
//Metodos

void pajaro::volar(){
    cout << "El wachin se fue volando" << endl;
}

void pajaro::cantar(){
    cout << "Él la estaba esperando\n";
    cout <<  "Con una flor amarilla \n";
    cout << "Ella lo estaba soñando\n";
    cout << "Con la luz en su pupila\n";
}