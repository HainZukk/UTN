#include <iostream>
using namespace std;
int main(){

    int horas;
    char tipo_lenguaje;
    bool urgencia;
    int costo_por_hora;
    int costo_total;


    cout << "Ingrese la cantidad de horas del proyecto: ";
    cin >> horas;

    cout << "Ingrese el tipo de lenguaje (C, #, P, G): ";
    cin >> tipo_lenguaje;

    cout << "¿Es urgente el proyecto? (1 para Sí, 0 para No): ";
    cin >> urgencia;

    if (tipo_lenguaje == 'C'){
        costo_por_hora = 7500;
    }
    else if (tipo_lenguaje == '#'){
        costo_por_hora = 6100;
    }
    else if (tipo_lenguaje == 'P'){
        costo_por_hora = 5400;
    }
    else if (tipo_lenguaje == 'G'){
        costo_por_hora = 5000;
    }

    costo_total = horas * costo_por_hora;
    if (urgencia){

        costo_total = costo_total * 220 /100;
        
    }

    cout << "El costo total del proyecto es: $" << costo_total << endl;


    return 0;
}