#ifndef DIRECCION_H_INCLUDED
#define DIRECCION_H_INCLUDED

class Direccion {
    private:
        char _calle[50];
        char _numero[6];
        char _localidad[50];
    public:
        Direccion();
        Direccion(char* calle,char* numero,char* localidad);

        //Setters
        void setCalle(char* calle);
        void setNumero(char* numero);
        void setLocalidad(char* localidad);
        //Getters
        char* getCalle();
        char* getNumero();
        char* getLocalidad();
        //Metodos
        void mostrar();
};



#endif