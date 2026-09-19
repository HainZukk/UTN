#include <iostream>
#include "local.h"

Local::Local() : Inmueble (){
    _antiguedad = 0;
    _superficieTotal = 0;
    _superficieEstacionamiento = 0;
    _zonaComercial = false;
}

void Local::setAntiguedad(int antiguedad){
    _antiguedad = antiguedad;
}
void Local::setSuperficieTotal(float superficieTotal){
    _superficieTotal = superficieTotal;
}
void Local::setSuperficieEstacionamiento(float superficieEstacionamiento){
    _superficieEstacionamiento = superficieEstacionamiento;
}
void Local::setZonaComercial(bool zonaComercial){
    _zonaComercial = zonaComercial;
}

int Local::getAntiguedad(){
    return _antiguedad;
}
int Local::getSuperficieTotal(){
    return _superficieTotal;
}
int Local::getSuperficieEstacionamiento(){
    return _superficieEstacionamiento;
}
bool Local::getZonaComercial(){
    return _zonaComercial;
}

void Local::cargar(){
    Inmueble::cargar();
    std::cout << "Antigüedad (años): ";
    std::cin >> _antiguedad;
    std::cout << "Superficie Total (m2): ";
    std::cin >> _superficieTotal;
    std::cout << "Superficie Estacionamiento (m2): ";
    std::cin >> _superficieEstacionamiento;
    std::cout << "¿Es Zona Comercial? (1-Sí / 0-No): ";
    std::cin >> _zonaComercial;
}

void Local::mostrar(){
    Inmueble::mostrar();
    std::cout << "Tipo: Local Comercial" << std::endl;
    std::cout << "Antigüedad: " << _antiguedad << " años" << std::endl;
    std::cout << "Sup. Total: " << _superficieTotal << " m2 | Sup. Estacionamiento: " << _superficieEstacionamiento << " m2" << std::endl;
    std::cout << "Zona Comercial: " << (_zonaComercial ? "Sí" : "No") << std::endl;

}