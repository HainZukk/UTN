#include <string>
#include <iostream>
#include "destornillador.h"

//constructores
destornillador::destornillador(float peso,float longitud , std::string tipoPunta) : herramientas(peso ,longitud){
    _tipoPunta = tipoPunta;
    _nombre = "Destornillador"; 
} 

//setters
void destornillador::setTipoPunta(std::string tipoPunta){
    _tipoPunta = tipoPunta;
}
//getters
std::string destornillador::getTipoPunta(){
    return _tipoPunta;
}
//metodos
void destornillador::mostrarInformacion(){
    herramientas::mostrarInformacion();
    std::cout << "Tipo de Punta: " << _tipoPunta <<"\n";
}