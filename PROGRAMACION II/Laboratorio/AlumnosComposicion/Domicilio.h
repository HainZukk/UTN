#ifndef DOMICILIO_H_INCLUDED
#define DOMICILIO_H_INCLUDED
#include "Domicilio.cpp"

class Domicilio{
    private: 
    std::string  _calle;
    std::string  _numero;
    std::string  _piso;
    std::string  _departamento;
    std::string  _localidad;
    std::string  _codigoPostal;
    public:
    void mostrar();
    Domicilio(std::string calle = "",std::string num = "" ,std::string piso = "",std::string depto = "",std::string loc = "",std::string cp = "");

    //Setters
    void setCalle(std::string calle);
    void setNumero(std::string numero);
    void setPiso(std::string piso);
    void setDepartamento(std::string departamento);
    void setLocalidad(std::string localidad);
    void setCodigoPostal(std::string codigoPostal);

    //Getters
    std::string getCalle();
    std::string getNumero();
    std::string getPiso();
    std::string getDepartamento();
    std::string getLocalidad();
    std::string getCodigoPostal();

};

#endif