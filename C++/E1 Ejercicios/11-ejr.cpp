/*
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minuto
*/

#include <iostream>
using namespace std;
int main (){

    int MinutosIngresados,dias,horas,minutos;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> MinutosIngresados;

    dias = MinutosIngresados / 1440;
    horas = (MinutosIngresados % 1440) / 24;
    minutos = MinutosIngresados % 60;

    cout << "Equivale a " << dias << " día(s), " << horas << " hora(s) y " << minutos << " minuto(s).\n";

    return 0;
}