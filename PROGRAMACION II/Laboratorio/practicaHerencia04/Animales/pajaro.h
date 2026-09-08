#ifndef PAJARO_H_INCLUDED
#define PAJARO_H_INCLUDED
#include "animales.h"

class pajaro : public animales{
    private:    
        std::string _color;
    public:
        //Setters
            void setColor(std::string color);
        //Getters
            std::string getColor();
        //Metodos
            void cantar();
            void volar();

};




#endif