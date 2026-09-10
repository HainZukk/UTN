#ifndef TALADROPERCUTOR_H_INCLUDED
#define TALADROPERCUTOR_H_INCLUDED
#include "taladro.h"


class taladroPercutor : public taladro {
    private:
        int _golpesPorMinuto;
    public:
        //Constructor
        taladroPercutor(float peso, float longitud, float potencia, int golpesPorMinuto);
        //Setters
        void setGolpesPorMinutos(int golpesPorMinuto);
        //Getters
        int getGolpesPorMinuto();
        //Metodos
        void mostrarInformacion();
};



#endif