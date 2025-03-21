//Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importe a pagar.
//Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
//Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800.


#include <iostream>
using namespace std;
int main(){

    float importe_venta, porcentaje_descuento, total_a_pagar;

    cout << "Ingrese el importe de la venta: $";
    cin >> importe_venta;

    cout << "Ingrese el importe de descuento: %";
    cin >> porcentaje_descuento;

    total_a_pagar = importe_venta - (importe_venta * porcentaje_descuento / 100);

    cout << "El total a pagar es: $" << total_a_pagar << endl;

    return 0;


}