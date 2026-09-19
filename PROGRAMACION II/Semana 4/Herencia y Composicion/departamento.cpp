#include <iostream>
#include <cstring>
#include "departamento.h"
using namespace std;

Departamento::Departamento() : Inmueble() {
    _piso[0] = '\0';
    _departamento[0] = '\0';
    _antiguedad = 0;
    _superficieTotal = 0.0f;
    _superficieCubierta = 0.0f;
    _habitaciones = 0;
    _superficieBalcon = 0.0f;
    _conCochera = false;
    _costoExpensa = 0.0f;
}

void Departamento::cargar() {
    Inmueble::cargar();
    cin.ignore();

    char piso[4], depto[4];
    cout << "Piso: ";
    cin.getline(piso, 4);
    cout << "Departamento: ";
    cin.getline(depto, 4);
    setPiso(piso);
    setDepartamento(depto);

    cout << "Antigüedad (años): ";
    cin >> _antiguedad;
    cout << "Superficie Total (m2): ";
    cin >> _superficieTotal;
    cout << "Superficie Cubierta (m2): ";
    cin >> _superficieCubierta;
    cout << "Habitaciones: ";
    cin >> _habitaciones;
    cout << "Superficie Balcón (m2): ";
    cin >> _superficieBalcon;
    cout << "¿Tiene Cochera? (1-Sí / 0-No): ";
    cin >> _conCochera;
    cout << "Costo Expensas: $";
    cin >> _costoExpensa;
}

void Departamento::mostrar() {
    Inmueble::mostrar();
    cout << "Tipo: Departamento (Piso: " << _piso << " Depto: " << _departamento << ")" << endl;
    cout << "Antigüedad: " << _antiguedad << " años | Habitaciones: " << _habitaciones << endl;
    cout << "Sup. Total: " << _superficieTotal << " m2 | Sup. Cubierta: " << _superficieCubierta 
         << " m2 | Sup. Balcón: " << _superficieBalcon << " m2" << endl;
    cout << "Cochera: " << (_conCochera ? "Sí" : "No") << " | Expensas: $" << _costoExpensa << endl;
}

void Departamento::setPiso(const char* piso) { 
    strcpy(_piso, piso); 
}
void Departamento::setDepartamento(const char* depto) {
    strcpy(_departamento, depto); 
}
void Departamento::setAntiguedad(int antiguedad) {
    _antiguedad = antiguedad; 
}
void Departamento::setSuperficieTotal(float supTotal) {
    _superficieTotal = supTotal; 
}
void Departamento::setSuperficieCubierta(float supCub) {
    _superficieCubierta = supCub; 
}
void Departamento::setHabitaciones(int hab) {
    _habitaciones = hab; 
}
void Departamento::setSuperficieBalcon(float supBalcon) {
    _superficieBalcon = supBalcon; 
}
void Departamento::setConCochera(bool cochera) {
    _conCochera = cochera;
}
void Departamento::setCostoExpensa(float expensas) {
    _costoExpensa = expensas; 
}

const char* Departamento::getPiso() {
    return _piso; 
}
const char* Departamento::getDepartamento() {
    return _departamento;
}
int Departamento::getAntiguedad() {
    return _antiguedad;
}
float Departamento::getSuperficieTotal() {
    return _superficieTotal;
 }
float Departamento::getSuperficieCubierta() {
    return _superficieCubierta;
}
int Departamento::getHabitaciones() {
    return _habitaciones;
}
float Departamento::getSuperficieBalcon() {
    return _superficieBalcon; 
}
bool Departamento::getConCochera() {
    return _conCochera;
}
float Departamento::getCostoExpensa() {
    return _costoExpensa; 
}