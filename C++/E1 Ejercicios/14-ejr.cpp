/*
Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.
Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
Importe: 4500, Descuento: 1800, total: 2700.
*/

#include <iostream>

using namespace std;

int main() {
    // Declarar las variables
    int importe, descuento, descuentoAplicado, total;
    
    cout << "Ingrese el importe de la compra: ";
    cin >> importe;

    cout << "Ingrese el porcentaje de descuento: ";
    cin >> descuento;

    descuentoAplicado = (importe * descuento) / 100;
    total = importe - descuentoAplicado;

    cout << "Importe: " << importe << ", Descuento: " << descuentoAplicado << ", Total: " << total << endl;



    return 0;
}