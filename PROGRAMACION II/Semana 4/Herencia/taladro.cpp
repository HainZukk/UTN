#include <iostream>
#include "taladro.h"

// Constructor
taladro::taladro(float peso, float longitud, float potencia) 
    : herramientas(peso, longitud) {
    _nombre = "Taladro";
    _potencia = potencia;
}

// Setter
void taladro::setPotencia(float potencia) {
    _potencia = potencia;
}

// Getter
float taladro::getPotencia() {
    return _potencia;
}

// Método mostrarInformacion
void taladro::mostrarInformacion() {
    herramientas::mostrarInformacion();
    std::cout << "Potencia: " << _potencia << " W\n";
}