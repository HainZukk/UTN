#include <iostream>
#include "casa.h"

Casa::Casa() : Inmueble(){
    _antiguedad = 0;
    _superficieTotal = 0; 
    _superficieCubierta = 0;
    _habitaciones = 0;
}

void Casa::cargar(){
    Inmueble::cargar();
    std::cout << "Antiguedad (años): ";
    std::cin >> _antiguedad;
    std::cout << "Superficie Total (m2): ";
    std::cin >> _superficieTotal; 
    std::cout << "Superficie Cubierta (m2): ";
    std::cin >> _superficieCubierta;
    std::cout << "Habitaciones: ";
    std::cin >> _habitaciones;
}

void Casa::mostrar(){
    Inmueble::mostrar();
    std::cout << "Tipo: Casa" << std::endl;
    std::cout << "Antiguedad: " << _antiguedad << "años | Habitaciones: " << _habitaciones << std::endl;
    std::cout << "Sup. Total: " << _superficieTotal << "m2 | Sup. Cubierta: " << _superficieCubierta << std::endl;
}