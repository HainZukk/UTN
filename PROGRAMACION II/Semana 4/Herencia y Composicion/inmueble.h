#ifndef INMUEBLE_H_INCLUDED
#define INMUEBLE_H_INCLUDED
#include "direccion.h"
#include "persona.h"

class Inmueble{
    protected:
        int _codigo;
        Direccion _direccion;
        Persona _duenio;
        float _precioVenta;
        float _precioAlquiler;
    public:
        Inmueble();
        //setters
        void setCodigo(int codigo);
        void setDireccion(Direccion direccion);
        void setDireccion(char* calle , char* numero, char* localidad);
        void setDuenio(Persona persona);
        void setDuenio(char* nombre, char* apellido, char* dni,char* celular);
        void setPrecioVenta(float precioVenta);
        void setPrecioAlquiler(float precioAlquiler);
        //getters
        int getCodigo();
        Direccion getDireccion();
        Persona getDuenio();
        float getPrecioVenta();
        float getPrecioAlquiler();
        //metodos
        void mostrar();
        void cargar();
};


#endif