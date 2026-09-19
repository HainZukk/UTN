#ifndef CASAQUINTA_H_INCLUDED
#define CASAQUINTA_H_INCLUDED
#include "casa.h"

class CasaQuinta : public Casa{
    private:
        bool _pileta;
        bool _quincho;
    public:
        CasaQuinta();
        
        void setPileta(bool pileta);
        void setQuincho(bool quincho);
        
        bool getPileta();
        bool getQuincho();
        
        void cargar();
        void mostrar();
};
#endif