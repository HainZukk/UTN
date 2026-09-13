#include <iostream>
#include "inmueble.h"

Inmueble::Inmueble(){
    _codigo = 0;
    _precioVenta = 0;
    _precioAlquiler = 0;
}

//Setters
void Inmueble::setCodigo(int codigo){
    _codigo = codigo;
}
void Inmueble::setDireccion(Direccion direccion){
    _direccion = direccion;
}
void Inmueble::setDireccion(char* calle , char* numero , char* localidad){
    _direccion.setCalle(calle);
    _direccion.setNumero(numero);
    _direccion.setLocalidad(localidad);
}
void Inmueble::setDuenio(Persona duenio){
    _duenio = duenio;
}
void Inmueble::setDuenio(char* nombre,char* apellido,char* dni,char* celular){
    _duenio.setNombre(nombre);
    _duenio.setApellido(apellido);
    _duenio.setDni(dni);
    _duenio.setCelular(celular);
}
void Inmueble::setPrecioVenta(float precioVenta){
    _precioVenta = precioVenta;
}
void Inmueble::setPrecioAlquiler(float precioAlquiler){
    _precioAlquiler = precioAlquiler;
}

//Getters
int Inmueble::getCodigo(){
    return _codigo;
}
Direccion Inmueble::getDireccion(){
    return _direccion;
}
Persona Inmueble::getDuenio(){
    return _duenio;
}
float Inmueble::getPrecioVenta(){
    return _precioVenta;
}
float Inmueble::getPrecioAlquiler(){
    return _precioAlquiler;
}

//Metodos

void Inmueble::cargar(){
    char calle[50],numero[6],localidad[50];
    char nombre[50],apellido[50],dni[12],celular[15];

    std::cout << "Codigo inmueble: ";
    std::cin >> _codigo;
    std::cin.ignore();

    std::cout << "Calle: ";
    std::cin.getline(calle,50);
    std::cout << "Numero: ";
    std::cin.getline(numero,6);
    std::cout << "Localidad: ";
    std::cin.getline(localidad,50);
    setDireccion(calle,numero,localidad);

    std::cout << "Nombre del dueño: ";
    std::cin.getline(nombre,50);
    std::cout << "Apellido: ";
    std::cin.getline(apellido,50);
    std::cout << "DNI del dueño: ";
    std::cin.getline(dni,12);
    std::cout << "Celular del dueño: ";
    std::cin.getline(celular,15);
    setDuenio(nombre,apellido,dni,celular);

}

void Inmueble::mostrar(){
    std::cout << "\========================================" << std::endl;
    std::cout << "Codigo inmueble: " << _codigo << std::endl;
    _direccion.mostrar();
    _duenio.mostrar();

    if (_precioVenta > 0){
        std::cout << "Precio venta: $" << _precioVenta << std::endl;\
    } 
    else{
        std::cout << "Precio venta: $0 (No disponible para venta)" << std::endl; 
    }

    if (_precioAlquiler > 0){
        std::cout << "Precio Alquiler: $" << _precioAlquiler << std::endl;\
    }
    else{
        std::cout << "Precio alquiler: $0 (No disponible para alquiler)" << std::endl; 
    }
}