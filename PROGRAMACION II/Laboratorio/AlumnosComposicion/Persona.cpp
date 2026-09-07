#include <iostream>
using namespace std;
#include <string>
#include "Persona.h"

Persona::Persona(){
}

std::string Persona::toCSV(){
  std::string valor;
  valor = _apellido + "," + _nombre;
  return valor;
}

// Getters
std::string Persona::getApellido(){
  return _apellido;
}
std::string Persona::getNombre(){
  return _nombre;
}
Domicilio Persona::getDomicilio(){
  return _domicilio;
}
std::string Persona::getTelefono(){
  return _telefono;
}
std::string Persona::getEmail(){
  return _email;
}
Fecha Persona::getFechaNacimiento(){
  return _nacimiento;
}

// Setters
void Persona::setApellido(std::string apellido){
  _apellido = apellido;
}
void Persona::setNombre(std::string nombre){
  _nombre = nombre;
}
void Persona::setDomicilio(Domicilio domicilio){
  _domicilio = domicilio;
}
void Persona::setTelefono(std::string telefono){
  _telefono = telefono;
}
void Persona::setEmail(std::string email){
  _email = email;
}
void Persona::setFechaNacimiento(int dia, int mes, int anio){
  _nacimiento.setDia(dia);
  _nacimiento.setMes(mes);
  _nacimiento.setAnio(anio);
}
void Persona::setFechaNacimiento(Fecha nacimiento){
  _nacimiento = nacimiento;
}

void Persona::mostrar(){
    cout << "Apellido y nombre: " << _apellido << " " << _nombre << endl;
    cout << "Fecha de nacimiento: " << _nacimiento.toString("-") << endl;
    cout << "Domicilio: " << _domicilio.getCalle() << " " << _domicilio.getNumero();
    if (!_domicilio.getPiso().empty())
        cout << " Piso " << _domicilio.getPiso();
    if (!_domicilio.getDepartamento().empty())
        cout << " Dpto " << _domicilio.getDepartamento();
    cout << endl;
    cout << "Localidad: " << _domicilio.getLocalidad() << " (CP " << _domicilio.getCodigoPostal()<< ")" << endl;
    cout << "Telefono: " << _telefono << endl;
    cout << "Email: " << _email << endl;
}
