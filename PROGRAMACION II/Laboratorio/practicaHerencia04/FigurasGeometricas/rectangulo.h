#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED
#include "figuras.h"

class Rectangulo : public Figuras{
    private:
        float _base;
        float _altura;
    public:
        //Constructor
        Rectangulo();
        //Setters
        void setBase(float base);
        void setAltura(float altura);
        //Getters
        float getBase();
        float getAltura();
        float calcularArea();
        float calcularPerimetro();
        void mostrar();
};


#endif