#ifndef TALADRO_H_INCLUDED
#define TALADRO_H_INCLUDED

#include <string>
#include "herramientas.h"

class taladro : public herramientas {
private:
    float _potencia;

public:
    // Constructor
    taladro(float peso, float longitud, float potencia);

    // Setter y Getter
    void setPotencia(float potencia);
    float getPotencia();

    // Método
    void mostrarInformacion();
};

#endif