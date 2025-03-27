/*
Un negocio de perfumería efectúa descuentos según el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%

Hacer un programa donde se ingresa el importe original sin descuento y se informe por pantalla el importe con el descuento ya aplicado.
Importante: Verifique que el programa emita UN SOLO CARTEL.
*/

#include <iostream>
using namespace std;
int main (){

    float imp_orginal , imp_con_descuento;

    cout << "Ingrese el importe original: ";
    cin >> imp_orginal;

    if (imp_orginal > 100){
        imp_con_descuento = imp_orginal - (imp_orginal * 0.05);
    }
    else if (imp_orginal >= 100 && imp_orginal <= 500)
    {
        imp_con_descuento = imp_orginal - (imp_orginal * 0.10);
    }
    else {
        imp_con_descuento = imp_orginal - (imp_orginal * 0.15); 
    }  
    
    cout << "El importe con descuento es: $" << imp_con_descuento << endl;


    return 0;
}