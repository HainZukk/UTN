#include <iostream>
#include "examen.h"

examen::examen(){
    _dia = 1;
    _mes = 1;
    _anio = 2026;
    _legajo = 0;
    _codigoMateria = 0;
    _calificacion = 0;
    _tipo = 'P';
}

examen::examen(int dia,int mes,int anio,int legajo,int codigoMateria,float calificacion,char tipo){
    _dia = dia;
    _mes = mes;
    _anio = mes;
    _legajo = legajo;
    _codigoMateria = codigoMateria;
    _calificacion = calificacion;
    _tipo = tipo;
}

void examen::setDia(int dia){
    _dia = dia;
}
void examen::setMes(int mes){
    _mes = mes;
}
void examen::setAnio(int anio){
    _anio = anio;
}
void examen::setLegajo(int legajo){
    _legajo = legajo;
}
void examen::setCodigoMateria(int codigoMateria){
    _codigoMateria = codigoMateria;
}
void examen::setCalificacion(float calificacion){
    _calificacion = calificacion;
}
void examen::setTipo(char tipo){
    _tipo = tipo;
}

int examen::getDia(){
    return _dia;
};
int examen::getMes(){
    return _mes;
};
int examen::getAnio(){
    return _anio;
};
int examen::getLegajo(){
    return _legajo;
};
int examen::getCodigoMateria(){
    return _codigoMateria;
};
float examen::getCalificacion(){
    return _calificacion;
};
char examen::getTipo(){
    return _tipo;
};

//metodos

void examen::mostrarInfo(){
    std::cout << "-----Datos del examen-----" << std::endl;
    std::cout << "Fecha: " << _dia << "/" << _mes << "/" << _anio << std::endl;
    std::cout << "Legajo: " << _legajo << std::endl;
    std::cout << "Materia: " << _codigoMateria << std::endl;
    std::cout << "Tipo: " << (_tipo == 'P' ? "Parcial" : "Final") << std::endl;
    std::cout << "Calificacion: " << _calificacion << std::endl;
}