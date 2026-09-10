#include <iostream>
#include <string>
#include "herramientas.h"

//Constructores
herramientas::herramientas(float peso , float longitud){
    _peso = peso;
    _longitud = longitud;
    _nombre = "";
}

//Setters
void herramientas::setPeso(float peso){
    _peso = peso;
}
void herramientas::setLongitud(float longitud){
    _longitud = longitud;
}
void herramientas::setNombre(std::string nombre){
    _nombre = nombre;
}

//Getters
float herramientas::getPeso(){
    return _peso;
}
float herramientas::getLongitud(){
    return _longitud;
}
std::string herramientas::getNombre(){
    return _nombre;
}

//Metodos
void herramientas::mostrarInformacion(){
    std::cout << "Nombre de la herramientas: " << _nombre <<"\n";
    std::cout << "Peso: " << _peso << "\n";
    std::cout << "Longitud: " << _longitud << "\n";
}

