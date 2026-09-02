#include <iostream>
using namespace std;
#include "Domicilio.h"


Domicilio::Domicilio(std::string calle, std::string numero, std::string piso, std::string departamento, std::string localidad, std::string codigoPostal){
    _calle = calle;
    _numero = numero;
    _piso = piso;
    _departamento = departamento;
    _localidad = localidad;
    _codigoPostal = codigoPostal;
}


//Getters
std::string Domicilio::getCalle(){
  return _calle;
}
std::string Domicilio::getNumero(){
  return _numero;
}
std::string Domicilio::getPiso(){
  return _piso;
}
std::string Domicilio::getDepartamento(){
  return _departamento;
}
std::string Domicilio::getLocalidad(){
  return _localidad;
}
std::string Domicilio::getCodigoPostal(){
  return _codigoPostal;
}

//Setters
void Domicilio::setCalle(std::string calle){
  _calle = calle;
}
void Domicilio::setNumero(std::string numero){
  _numero = numero;
}
void Domicilio::setPiso(std::string piso){
  _piso = piso;
}
void Domicilio::setDepartamento(std::string departamento){
  _departamento = departamento;
}
void Domicilio::setLocalidad(std::string localidad){
  _localidad = localidad;
}
void Domicilio::setCodigoPostal(std::string codigoPostal){
  _codigoPostal = codigoPostal;
}


// void Domicilio::mostrarDomi(){
//     cout << "Domicilio: " << _calle << " " << _numero;
//     if (!_piso.empty())
//         cout << " Piso " << _piso;
//     if (!_departamento.empty())
//         cout << " Dpto " << _departamento;
//     cout << endl;
//     cout << "Localidad: " << _localidad << " (CP " << _codigoPostal << ")" << endl;
// }

