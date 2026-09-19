#include <iostream>
#include "CasaQuinta.h"

CasaQuinta::CasaQuinta() : Casa(){
    _pileta = false;
    _quincho = false;
}

//Setters
void CasaQuinta::setPileta(bool pileta){
    _pileta = pileta;
}
void CasaQuinta::setQuincho(bool quincho){
    _quincho = quincho;
}
//Getters
bool CasaQuinta::getPileta(){
    return _pileta;
}
bool CasaQuinta::getQuincho(){
    return _quincho;
}

//Metodos
void CasaQuinta::cargar(){
    Casa::cargar();
    std::cout<<"Tiene pileta (1-Si / 2-No): ";
    std::cin >> _pileta;
    std::cout<<"Tiene Quincho (1-Si / 2-No): ";
    std::cin >> _quincho;
}

void CasaQuinta::mostrar(){
    Casa::mostrar();
    std::cout << "Especificación: Casa Quinta" << std::endl;
    std::cout << "Pileta: " << (_pileta ? "Sí" : "No") << " | Quincho: " << (_quincho ? "Sí" : "No") << std::endl;
}
