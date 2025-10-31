#include <iostream>
#include <ctime>
#include <cstdlib>
#include "funciones.h"
using namespace std;

void menuPrincipal();
void jugar();
float recolectarAlimentos();
float recolectarMateriales(float porcentajeRefugio);
void mostrarResultados(float kgAlimentos, float porcentajeRefugio, const int DIAS);

int main() {
    srand(time(NULL)); 

    menuPrincipal();

    return 0;
}
