#include <iostream>
using namespace std;
#include <string>
#include "cuadrado.h"

//Constructor
Cuadrado::Cuadrado(){
    _lado = 0;
}


//Setters
void Cuadrado::setLado(float lado){
    _lado = lado;
} 
//Getters
float Cuadrado::getLado(){
    return _lado;
}

float Cuadrado::calcularArea(){
    return _lado * _lado;
}

float Cuadrado::calcularPerimetro(){
    return _lado * 4;
}

void Cuadrado::mostrar(){
    cout << "Color: " << getColor() << endl;
    cout << "Lado: " << getLado() << endl;
    cout << "Area: " << calcularArea() << endl;
    cout << "Perimetro: " << calcularPerimetro() << endl;
}


