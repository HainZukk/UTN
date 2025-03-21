//Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
//Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.

#include <iostream>
using namespace std;

int main() {

    float semana1, semana2, semana3, semana4;
    float total_recaudado, promedio, porcentaje1, porcentaje2, porcentaje3, porcentaje4;

    cout << "Ingrese las recaudaciones de la semana 1: "<<"$";
    cin >> semana1;

    cout << "Ingrese las recaudaciones de la semana 2: "<<"$";
    cin >> semana2;

    cout << "Ingrese las recaudaciones de la semana 3: "<<"$";
    cin >> semana3;

    cout << "Ingrese las recaudaciones de la semana 4: "<<"$";
    cin >> semana4;

    total_recaudado = semana1 + semana2 + semana3 + semana4;
    promedio = total_recaudado / 4;

    porcentaje1 = (semana1 / total_recaudado) * 100;
    porcentaje2 = (semana2 / total_recaudado) * 100;
    porcentaje3 = (semana3 / total_recaudado) * 100;
    porcentaje4 = (semana4 / total_recaudado) * 100;

    cout << "La recaudacion promedio por semana es: $" << promedio << endl;
    cout << "Porcentaje de recaudacion por semana"<<endl;
    cout << "Semana 1: " << porcentaje1 <<"%"<<endl;
    cout << "Semana 2: " << porcentaje2 <<"%"<<endl;
    cout << "Semana 3: " << porcentaje3 <<"%"<<endl;
    cout << "Semana 4: " << porcentaje4 <<"%"<<endl;

    return 0;
}