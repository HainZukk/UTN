#include <iostream>
#include <cstring>
#include "direccion.h"

Direccion::Direccion(){
    _calle[0] = '\0';
    _numero[0] = '\0';
    _localidad[0] = '\0';
}

Direccion::Direccion(char* calle,char* numero,char* localidad){
    setCalle(calle);
    setNumero(numero);
    setLocalidad(localidad);
}

//Setters
void Direccion::setCalle(char* calle){
    strcpy(_calle,calle);
}
void Direccion::setNumero(char* numero){
    strcpy(_numero,numero);
}
void Direccion::setLocalidad(char* localidad){
    strcpy(_localidad,localidad);
}

//Getters
char *Direccion::getCalle(){
    return _calle;
}
char *Direccion::getNumero(){
    return _numero;
}
char *Direccion::getLocalidad(){
    return _localidad;
}

//Metodos
void Direccion::mostrar(){
    std::cout << "Direccion: " << _calle << " " << _numero << ", " << _localidad << std::endl;
}