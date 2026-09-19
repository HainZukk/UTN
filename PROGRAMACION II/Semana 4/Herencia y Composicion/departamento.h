#ifndef DEPARTAMENTO_H_INCLUDED
#define DEPARTAMENTO_H_INCLUDED
#include "inmueble.h"

class Departamento : public Inmueble {
private:
    char _piso[4];
    char _departamento[4];
    int _antiguedad;
    float _superficieTotal;
    float _superficieCubierta;
    int _habitaciones;
    float _superficieBalcon;
    bool _conCochera;
    float _costoExpensa;

public:
    Departamento();
    void cargar();
    void mostrar();

    void setPiso(const char* piso);
    void setDepartamento(const char* depto);
    void setAntiguedad(int antiguedad);
    void setSuperficieTotal(float supTotal);
    void setSuperficieCubierta(float supCub);
    void setHabitaciones(int hab);
    void setSuperficieBalcon(float supBalcon);
    void setConCochera(bool cochera);
    void setCostoExpensa(float expensas);

    const char* getPiso();
    const char* getDepartamento();
    int getAntiguedad();
    float getSuperficieTotal();
    float getSuperficieCubierta();
    int getHabitaciones();
    float getSuperficieBalcon();
    bool getConCochera();
    float getCostoExpensa();
};

#endif // DEPARTAMENTO_H_INCLUDED