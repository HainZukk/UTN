#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include "figuras.h"

class Circulo : public Figuras{
    private:
        float _radio;
    public:
        //Constructores
        Circulo();
        Circulo(std::string color, float radio);     
        //Setters
        void setRadio(float radio);
        //Getters
        float getRadio();
        //Metodos 
        float calcularArea();
        float calcularPerimetro();
        void mostrar();
};


#endif