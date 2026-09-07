#ifndef DOCENTE_H_INCLUDED
#define DOCENTE_H_INCLUDED

#include "Fecha.h"
#include "Domicilio.h"
#include "Persona.h"
#include <string>

class Docente : public Persona {

    private: 
        int _legajoDocente;
        Fecha        _contratacion;
        std::string  _cuil;
        // std::string  _apellido;
        // std::string  _nombre;
        // Fecha        _nacimiento;
        // Domicilio    _domicilio;
        // std::string  _telefono;
        // std::string  _email;
    public: 
        Docente();

        void mostrar();
        std::string toCSV();

        //Setters
        void setLegajo(int legajo);
        void setFechaContratacion(Fecha contratacion);
        void setFechaContratacion(int dia, int mes, int anio);
        void setCuil(std::string cuil);
        // void setApellido(std::string apellido);
        // void setNombre(std::string nombre);
        // void setFechaNacimiento(int dia, int mes, int anio);
        // void setFechaNacimiento(Fecha nacimiento);
        // void setDomicilio(Domicilio domicilio);
        // void setTelefono(std::string telefono);
        // void setEmail(std::string email);

        //Getters
        int getLegajo();
        Fecha getFechaContratacion();
        std::string getCuil();
        // std::string getApellido();
        // std::string getNombre();
        // Fecha getFechaNacimiento();
        // Domicilio getDomicilio();
        // std::string getTelefono();
        // std::string getEmail();
};


#endif