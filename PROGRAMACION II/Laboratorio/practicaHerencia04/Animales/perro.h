#ifndef PERRO_H_INCLUDED
#define PERRO_H_INCLUDED
#include "animales.h"

class perro : public animales{
    private: 
        std::string _raza;
    public: 
        //Setters
        void setRaza(std::string raza);
        //Getters
        std::string getRaza();
        //Metodos
        void ladrar();
        void morder();
};


#endif