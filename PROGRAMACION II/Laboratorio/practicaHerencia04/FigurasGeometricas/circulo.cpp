#include <iostream>
using namespace std;
#include "circulo.h"

const float PI = 3.1415;

//Constructores
Circulo::Circulo(){
    _radio = 0;
}

Circulo::Circulo(std::string color, float radio){
    _color = color;
    _radio = radio;
}   

//Setter
void Circulo::setRadio(float radio){
    _radio = radio;
}

//Getters
float Circulo::getRadio(){
    return _radio;
}

//Metodos
float Circulo::calcularArea(){
    return PI * _radio * _radio;
}

float Circulo::calcularPerimetro(){
    return 2 * PI * _radio;
}

void Circulo::mostrar(){
    cout << "Color: " << getColor() << endl;
    cout << "Radio: " << getRadio() << endl;
    cout << "Area: " << calcularArea() << endl;
    cout << "Perimetro: " << calcularPerimetro() << endl;
}