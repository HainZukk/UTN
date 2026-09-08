#include <iostream>
using namespace std;
#include <string>
#include "rectangulo.h"

//Constructor
Rectangulo::Rectangulo(){
    _base = 0;
    _altura = 0;
}


//Setters
void Rectangulo::setBase(float base){
    _base = base;
} 

void Rectangulo::setAltura(float altura){
    _altura = altura;
}

//Getters
float Rectangulo::getBase(){
    return _base;
}

float Rectangulo::getAltura(){
    return _altura;
}

float Rectangulo::calcularArea(){
    return _base * _altura;
}

float Rectangulo::calcularPerimetro(){
    return 2 * (_base + _altura);
}

void Rectangulo::mostrar(){
    cout << "Color: " << getColor() << endl;
    cout << "Base: " << getBase() << endl;
    cout << "Altura: " << getAltura() << endl;
    cout << "Area: " << calcularArea() << endl;
    cout << "Perimetro: " << calcularPerimetro() << endl;
}


