#ifndef CASA_H_INCLUDED
#define CASA_H_INCLUDED
#include "inmueble.h"
    

class Casa : public Inmueble {
    protected:
        int _antiguedad;
        float _superficieTotal;
        float _superficieCubierta;
        int _habitaciones;
    public: 
        Casa();
        //setters
        void setAntiguedad(int antiguedad);
        void setSuperficieTotal(float supTotal);
        void setSuperficieCubierta(float supCubierta);
        void setHabitaciones(int habitaciones);
        //getters
        int getAntiguedad();
        float getSuperficieTotal();
        float getCubierta();
        int getHabitaciones();

        //metodos
        void cargar();
        void mostrar();
};


#endif