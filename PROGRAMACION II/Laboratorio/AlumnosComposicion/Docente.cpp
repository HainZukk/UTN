#include <iostream>
using namespace std;
#include <string>
#include "Docente.h"

Docente::Docente(){
    _legajoDocente = 0;
}

std::string Docente::toCSV(){
  std::string valor;
  valor = to_string(_legajoDocente) + "," + _apellido + "," + _nombre + "," + _cuil;
  return valor;
}

//Getters
int Docente::getLegajo(){
  return _legajoDocente;
}
std::string Docente::getApellido(){
  return _apellido;
}
std::string Docente::getNombre(){
  return _nombre;
}
std::string Docente::getCuil(){
  return _cuil;
}
 
Domicilio Docente::getDomicilio(){
  return _domicilio;
}
 
std::string Docente::getTelefono(){
  return _telefono;
}
std::string Docente::getEmail(){
  return _email;
}
 
Fecha Docente::getFechaNacimiento(){
  return _nacimiento;
}
 
Fecha Docente::getFechaContratacion(){
  return _contratacion;
}

//Setters

void Docente::setLegajo(int legajo){
  _legajoDocente = legajo;
}
void Docente::setApellido(std::string apellido){
  _apellido = apellido;
}
void Docente::setNombre(std::string nombre){
  _nombre = nombre;
}
void Docente::setCuil(std::string cuil){
  _cuil = cuil;
}
 
void Docente::setDomicilio(Domicilio domicilio){
    _domicilio = domicilio;
}
 
void Docente::setTelefono(std::string telefono){
  _telefono = telefono;
}
void Docente::setEmail(std::string email){
  _email = email;
}

void Docente::setFechaNacimiento(int dia,int mes,int anio){
    _nacimiento.setDia(dia);
    _nacimiento.setMes(mes);
    _nacimiento.setAnio(anio);
}

void Docente::setFechaNacimiento(Fecha nacimiento){
    _nacimiento = nacimiento;
}

void Docente::setFechaContratacion(int dia, int mes, int anio){
  _contratacion.setDia(dia);
  _contratacion.setMes(mes);
  _contratacion.setAnio(anio);
}
void Docente::setFechaContratacion(Fecha contratacion){
  _contratacion = contratacion;
}

void Docente::mostrar(){
    cout << "Legajo docente: " << _legajoDocente << endl;
    cout << "Apellido y nombre: " << _apellido << " " << _nombre << endl;
    cout << "CUIL: " << _cuil << endl;
    cout << "Fecha de nacimiento: " << _nacimiento.toString("-") << endl;
    cout << "Domicilio: " << _domicilio.getCalle() << " " << _domicilio.getNumero();
    if (!_domicilio.getPiso().empty())
        cout << " Piso " << _domicilio.getPiso();
    if (!_domicilio.getDepartamento().empty())
        cout << " Dpto " << _domicilio.getDepartamento();
    cout << endl;
    cout << "Localidad: " << _domicilio.getLocalidad() << " (CP " << _domicilio.getCodigoPostal() << ")" << endl;
    cout << "Telefono: " << _telefono << endl;
    cout << "Email: " << _email << endl;
    cout << "Fecha de contratacion: " << _contratacion.toString() << endl;
}