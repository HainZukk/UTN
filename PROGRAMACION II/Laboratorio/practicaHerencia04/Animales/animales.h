#ifndef ANIMALES_H_INCLUDED
#define ANIMALES_H_INCLUDED
#include <string>

class animales{

    protected:
        std::string _nombre;
        float _peso;
    public:
        //Setters
        void setNombre(std::string nombre);
        void setPeso(float peso);
        //Getters
        std::string getNombre();
        float getPeso();
};





#endif