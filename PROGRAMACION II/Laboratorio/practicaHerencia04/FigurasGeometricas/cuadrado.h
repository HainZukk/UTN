#ifndef CUADRADO_H_INCLUDED
#define CUADRADO_H_INCLUDED
#include "figuras.h"

class Cuadrado : public Figuras{
    private:
        float _lado;
    public:
        //Constructores
        Cuadrado();
        Cuadrado(std::string color, float lado);
        //Setters
        void setLado(float lado);
        //Getters
        float getLado();
        float calcularArea();
        float calcularPerimetro();
        void mostrar();
};


#endif