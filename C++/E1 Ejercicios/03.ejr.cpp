//Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar. Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.

#include <iostream>
using namespace std;
int main (){

    int sueldo_fijo = 5000;
    int resultado;
    int cantidad_vehiculos_vendidos;

    //Ingresamos la cantidad de vehiculos vendidos
    cout << "Ingrese la cantidad de vehiculo vendidos: ";
    cin >> cantidad_vehiculos_vendidos;

    resultado = sueldo_fijo + cantidad_vehiculos_vendidos * 700;
    cout << "El sueldo es de con bonificacion = "<< resultado <<endl;




    return 0;
}