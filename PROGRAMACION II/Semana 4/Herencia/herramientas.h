#ifndef HERRAMIENTAS_H_INCLUDED
#define HERRAMIENTAS_H_INCLUDED
#include <string>

class herramientas{
    protected:
        std::string _nombre;
        float _peso;
        float _longitud;
        float _precioDeCompra; // Actividad 3
    public:
    //Constructor
    herramientas(float peso , float longitud,float precioDeCompra = 0); //Precio de Compra Actividad 3

    //Setters
    void setPeso(float peso);
    void setLongitud(float longitud);
    void setNombre(std::string nombre);
    void setPrecioCompra(float precioCompra); //Actividad 3
    //Getters
    float getPeso();
    float getLongitud();
    std::string getNombre();
    float getPrecioCompra(); //Actividad 3
    //Metodos
    void mostrarInformacion();
};




#endif