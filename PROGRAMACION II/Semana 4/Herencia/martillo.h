#ifndef MARTILLO_H_INCLUDED
#define MARTILLO_H_INCLUDED

#include <string>
#include "herramientas.h"

class martillo : public herramientas {
    private:
        std::string _tipoCabeza;
    public:
    //constructor
    martillo(float peso,float longitud , std::string tipoCabeza);
    //setters
    void setTipoCabeza(std::string tipoCabeza);
    //getters
    std::string getTipoCabeza();
    //Metodos
    void mostrarInformacion();
};  

#endif