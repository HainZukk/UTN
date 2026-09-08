#include <iostream>
using namespace std;
#include <string>
#include "figuras.h"

//Setters
void Figuras::setColor(string color){
    _color = color;
}
//Getters
string Figuras::getColor(){
    return _color;
}
