//Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo. Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.


#include <iostream>
using namespace std;
int main (){

    int asientos_totales , pasajes_ocupados;
    float porcentaje_ocupacion , porcentaje_no_ocupacion;

    cout << "Ingrese la cantidad total de asientos del avion : ";
    cin >> asientos_totales;
    cout << "Ingrese la cantidad de pasajes ocupados : ";
    cin >> pasajes_ocupados;

    porcentaje_ocupacion = (float) pasajes_ocupados / asientos_totales* 100;
    porcentaje_no_ocupacion = 100 - porcentaje_ocupacion;

    cout << "El porcentaje de ocupacion es de : " <<porcentaje_ocupacion<<"%"<<endl;
    cout << "El porcentaje de no ocupacion es de :  " <<porcentaje_no_ocupacion<<"%"<<endl;




    return 0;
}