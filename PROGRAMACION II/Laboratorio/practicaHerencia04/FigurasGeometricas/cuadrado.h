#ifndef CUADRADO_H_INCLUDED
#define CUADRADO_H_INCLUDED
#include "figuras.h"

class Cuadrado : public Figuras{
    private:
        float _lado;
    public:
        //Constructor
        Cuadrado();
        //Setters
        void setLado(float lado);
        //Getters
        float getLado();
        float calcularArea();
        float calcularPerimetro();
        void mostrar();
};


#endif