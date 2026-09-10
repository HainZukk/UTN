#ifndef DESTORNILLADOR_H_INCLUDED
#define DESTORNILLADOR_H_INCLUDED
#include "herramientas.h"
#include <string>

class destornillador : public herramientas {
    private: 
        std::string _tipoPunta;
    public:
        //Constructor
        destornillador(float peso,float longitud , std::string tipoPunta);
        //Setters
        void setTipoPunta(std::string tipoPunta);
        //Getters
        std::string getTipoPunta();
        //Metodos
        void mostrarInformacion();
};





#endif