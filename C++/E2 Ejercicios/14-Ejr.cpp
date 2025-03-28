#include <iostream>
using namespace std;

int main() {
    int diaNacimiento, mesNacimiento, anioNacimiento;
    int diaActual, mesActual, anioActual;
    int edad;

    cout << "Ingrese el día de nacimiento: ";
    cin >> diaNacimiento;
    cout << "Ingrese el mes de nacimiento: ";
    cin >> mesNacimiento;
    cout << "Ingrese el año de nacimiento: ";
    cin >> anioNacimiento;

    cout << "Ingrese el día actual: ";
    cin >> diaActual;
    cout << "Ingrese el mes actual: ";
    cin >> mesActual;
    cout << "Ingrese el año actual: ";
    cin >> anioActual;

    edad = anioActual - anioNacimiento;


    if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
        edad--; 
    }

    // Mostrar la edad
    cout << "La edad de la persona es: " << edad << " años." << endl;

    return 0;
}