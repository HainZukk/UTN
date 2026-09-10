#include <iostream>
#include "taladroPercutor.h"

taladroPercutor::taladroPercutor(float peso, float longitud, float potencia, int golpesPorMinuto) : taladro(peso , longitud,potencia){
    _nombre = "Taladro Percutor";
    _golpesPorMinuto = golpesPorMinuto;
}

//Setters
void taladroPercutor::setGolpesPorMinutos(int golpesPorMinuto){
    _golpesPorMinuto = golpesPorMinuto;
}
//Getters
int taladroPercutor::getGolpesPorMinuto(){
    return _golpesPorMinuto;
}
//Metodos
void taladroPercutor::mostrarInformacion(){
    herramientas::mostrarInformacion();
    std::cout <<"Golpes por minuto: " << _golpesPorMinuto <<"\n"; 
}


