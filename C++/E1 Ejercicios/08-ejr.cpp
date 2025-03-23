//Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma.
//Ejemplo A. Si el importe de la venta sin descuento es $1500 y el importe de la venta con descuento es $1200 entonces el porcentaje de descuento aplicado fue el 20%.

#include <iostream>
using namespace std;
int main(){

    int importe_sin_descuento,importe_con_descuento,descuento;

    cout << "Ingrese el importe sin descuento: ";
    cin >> importe_sin_descuento;

    cout << "Ingrese el importe con descuento: ";
    cin >> importe_con_descuento;

    descuento = (importe_sin_descuento - importe_con_descuento) * 100 / importe_sin_descuento;
    cout << "El porcentaje de descuento aplicado fue del " << descuento << "%\n" << endl;



    return 0;
}
