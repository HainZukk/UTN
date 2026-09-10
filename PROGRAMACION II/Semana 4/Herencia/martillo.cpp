#include <iostream>
#include "martillo.h"

//Constructores
martillo::martillo(float peso,float longitud , std::string tipoCabeza) : herramientas(peso ,longitud) {
    _nombre = "Martillo";
    _tipoCabeza = tipoCabeza;
}

//Setter
void martillo::setTipoCabeza(std::string tipoCabeza){
    _tipoCabeza = tipoCabeza;
}
//Getters
std::string martillo::getTipoCabeza(){
    return _tipoCabeza;
}
//Metodos
void martillo::mostrarInformacion(){
    herramientas::mostrarInformacion();
    std::cout << "Tipo de Cabezal: " << _tipoCabeza <<"\n";
}