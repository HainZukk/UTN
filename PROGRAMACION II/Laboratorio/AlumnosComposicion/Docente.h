#ifndef DOCENTE_H_INCLUDED
#define DOCENTE_H_INCLUDED

#include "Fecha.h"
#include "Domicilio.h"
#include <string>

class Docente {

    private: 
        int _legajoDocente;
        std::string  _apellido;
        std::string  _nombre;
        std::string  _cuil;
        Fecha        _nacimiento;
        Fecha        _contratacion;
        Domicilio    _domicilio;
        std::string  _telefono;
        std::string  _email;
    public: 
        Docente();

        void mostrar();
        std::string toCSV();

        //Setters
        void setLegajo(int legajo);
        void setApellido(std::string apellido);
        void setNombre(std::string nombre);
        void setCuil(std::string cuil);
        void setFechaNacimiento(int dia, int mes, int anio);
        void setFechaNacimiento(Fecha nacimiento);
        void setFechaContratacion(int dia, int mes, int anio);
        void setFechaContratacion(Fecha contratacion);
        void setDomicilio(Domicilio domicilio);
        void setTelefono(std::string telefono);
        void setEmail(std::string email);

        //Getters
        int getLegajo();
        std::string getApellido();
        std::string getNombre();
        std::string getCuil();
        Fecha getFechaNacimiento();
        Fecha getFechaContratacion();
        Domicilio getDomicilio();
        std::string getTelefono();
        std::string getEmail();
};


#endif