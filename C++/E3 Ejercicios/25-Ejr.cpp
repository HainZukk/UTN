/*Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo
*/

#include <iostream>
using namespace std;
int main () {

    int legajo , legajoMaximo;
    float sueldo , MaxSueldo;
    int i = 0;

    cout << "Ingrese legajo y sueldo de 10 empleados: " << endl;
    while (i < 10){
        cout << "\nEmpleado " << i + 1 << endl;
        cout << "Legajo: ";
        cin >> legajo;
        cout << "Sueldo: $";
        cin >> sueldo;

        if (i == 0 || sueldo > MaxSueldo) {
            MaxSueldo = sueldo;
            legajoMaximo = legajo;
        }
        
        i++;
    }
    cout << "\nEl legajo del empleado con mayor sueldo es: " << legajoMaximo << endl;
    cout << "Sueldo: $" << MaxSueldo << endl;
    
    return 0;
}
