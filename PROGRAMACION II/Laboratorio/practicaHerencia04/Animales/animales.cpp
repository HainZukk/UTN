#include <iostream>
#include <string>
#include "animales.h"

//Setters
void animales::setNombre(std::string nombre){
    _nombre = nombre;
}

void animales::setPeso(float peso){
    _peso = peso;
}
//Getters
std::string animales::getNombre(){
    return _nombre;
}

float animales::getPeso(){
    return _peso;
}
