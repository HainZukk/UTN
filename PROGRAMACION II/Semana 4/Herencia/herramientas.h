#ifndef HERRAMIENTAS_H_INCLUDED
#define HERRAMIENTAS_H_INCLUDED
#include <string>

class herramientas{
    protected:
        // nombre (string), peso (float, en kg), longitud (float, en cm)
        std::string _nombre;
        float _peso;
        float _longitud;
    public:
    /*
    Métodos:
    Constructor que inicialice los atributos de peso y longitud. El nombre queda vacío.
    Métodos getters y setters para los atributos de peso y longitud.
    mostrarInformacion() → Imprime el nombre de la herramienta, el peso y la longitud.
    */  
    //Constructor
    herramientas(float peso , float longitud);

    //Setters
    void setPeso(float peso);
    void setLongitud(float longitud);
    void setNombre(std::string nombre);
    //Getters
    float getPeso();
    float getLongitud();
    std::string getNombre();
    //Metodos
    void mostrarInformacion();
};




#endif