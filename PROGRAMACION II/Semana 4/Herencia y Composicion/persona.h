#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona{
    private:
        char _apellido[50];
        char _nombre[50];
        char _dni[12];
        char _celular[15];
    public:
        Persona();
        //Setters
        void setNombre(char *nombre);
        void setApellido( char *apellido);
        void setDni(char *dni);
        void setCelular(char *celular);

        //Getters
        char *getNombre();
        char *getApellido();
        char *getDni();
        char *getCelular();

        //Metodos
        void mostrar() ;
};


#endif