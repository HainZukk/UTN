#ifndef LOCAL_H_INCLUDED
#define LOCAL_H_INCLUDED
#include "inmueble.h"

class Local : public Inmueble{  
    private:    
        int _antiguedad;
        float _superficieTotal;
        float _superficieEstacionamiento;
        bool _zonaComercial;
    public: 
        Local();

        void setAntiguedad(int antiguedad);
        void setSuperficieTotal(float superficieTotal);
        void setSuperficieEstacionamiento(float superficieEstacionamiento);
        void setZonaComercial(bool zonaComercial);

        int getAntiguedad();
        int getSuperficieTotal();
        int getSuperficieEstacionamiento();
        bool getZonaComercial();

        void cargar();
        void mostrar();
};






#endif