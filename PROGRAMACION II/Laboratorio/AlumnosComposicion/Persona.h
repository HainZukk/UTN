#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "Fecha.h"
#include "Domicilio.h"
#include <string>

class Persona {
protected:
    std::string _apellido;
    std::string _nombre;
    Fecha       _nacimiento;
    Domicilio   _domicilio;
    std::string _telefono;
    std::string _email;

public:
    Persona();

    void mostrar();
    std::string toCSV();

    // Setters
    void setApellido(std::string apellido);
    void setNombre(std::string nombre);
    void setFechaNacimiento(int dia, int mes, int anio);
    void setFechaNacimiento(Fecha nacimiento);
    void setDomicilio(Domicilio domicilio);
    void setTelefono(std::string telefono);
    void setEmail(std::string email);

    // Getters
    std::string getApellido();
    std::string getNombre();
    Fecha getFechaNacimiento();
    Domicilio getDomicilio();
    std::string getTelefono();
    std::string getEmail();

};

#endif