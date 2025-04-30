/*
Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.
*/

#include <iostream>
using namespace std;
int main () {

    int cantidadEmpleados = 10;
    float sueldos[10]; // Declaramos una lista con 10 elementos
    float suma = 0; 
    float maximo , minimo;
    int mayoresA50000 = 0;


    cout << "Ingrese el sueldo de " << cantidadEmpleados << " empleados " << endl;
    for (int i = 0; i < cantidadEmpleados; i++){
        cout << "Sueldo " << i + 1 << ": $";
        cin >> sueldos[i];

        suma += sueldos[i];
        if (sueldos[i] > 50000) {
            mayoresA50000 ++;
        }
        
        if (i == 0){
            maximo = minimo = sueldos[i];
        } 
        else {
            if (sueldos[i] > maximo) maximo = sueldos[i];
            if (sueldos[i] < minimo) minimo = sueldos[i];
        }
    }
    
    float promedio = suma / cantidadEmpleados;

    cout << "\nSueldo maximo: $" << maximo << endl;
    cout << "\nSueldo minimo: $" << minimo << endl;
    cout << "\nSueldo promedio: $" << promedio << endl;
    cout << "\nCantidad de sueldos mayores a $50000: " << mayoresA50000 << endl;


    return 0;
}