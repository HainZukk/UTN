/*
Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.
Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se deberán entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0 billetes de $100.
Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.
Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.
*/

#include <iostream>
using namespace std;
int main (){


    int importe, billetes1000, billetes500, billetes200, billetes100;

    cout << "Ingrese el importe a retirar (múltiplo de $100): ";
    cin >> importe;

    billetes1000 = importe / 1000;
    importe = importe % 1000;

    billetes500 = importe / 500;
    importe = importe % 500;

    billetes200 = importe / 200;
    importe = importe % 200;

    billetes100 = importe / 100;

    cout << "Billetes de $1000: " << billetes1000 << endl;
    cout << "Billetes de $500: " << billetes500 << endl;
    cout << "Billetes de $200: " << billetes200 << endl;
    cout << "Billetes de $100: " << billetes100 << endl;


    return 0;
}