#include <iostream>
#include <cstring>
#include "persona.h"

Persona::Persona(){
    _nombre[0] = '\0';
    _apellido[0] = '\0';
    _dni[0] = '0';
    _celular[0] = '0';
}

//setters
void Persona::setNombre(char *nombre){
    strcpy(_nombre,nombre);
}
void Persona::setApellido(char *apellido){
    strcpy(_apellido,apellido);
}
void Persona::setDni(char *dni){
    strcpy(_dni,dni);
}
void Persona::setCelular(char *celular){
    strcpy(_celular,celular);
}

//getters
char *Persona::getNombre(){
    return _nombre;
}
char *Persona::getApellido(){
    return _apellido;
}
char *Persona::getDni(){
    return _dni;
}
char *Persona::getCelular(){
    return _celular;
}

//Metodos
void Persona::mostrar(){
    std::cout << "Dueño: " << _nombre << " " << _apellido 
            << "| DNI: " << _dni << " | Cel: " << _celular << std::endl;
}
