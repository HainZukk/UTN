#ifndef EXAMEN_H_INCLUDED
#define EXAMEN_H_INCLUDED 
#include <string>

class examen {
    private:
        int _dia;
        int _mes;
        int _anio;
        int _legajo;
        int _codigoMateria;
        float _calificacion;
        char _tipo;
    public:
        //constructores
        examen();
        examen(int dia,int mes,int anio,int legajo,int codigoMateria,float calificacion,char tipo);
        //setters
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        void setLegajo(int legajo);
        void setCodigoMateria(int codigoMateria);
        void setCalificacion(float calificacion);
        void setTipo(char tipo);
        //getters
        int getDia();
        int getMes();
        int getAnio();
        int getLegajo();
        int getCodigoMateria();
        float getCalificacion();
        char getTipo();
        //metodos
        void mostrarInfo();
        // std::string toString();
};  


#endif