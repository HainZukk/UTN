#include <iostream>
using namespace std;

int main() {
    int edad, mayores30Altos = 0, entre17y18 = 0, edades20_30_40 = 0;
    float altura, sumaAlturasMayores30 = 0;
    int cantidadMayores30 = 0;

    // Persona 1
    cout << "Ingrese la edad de la persona 1: ";
    cin >> edad;
    cout << "Ingrese la altura de la persona 1 (en metros): ";
    cin >> altura;

    if (edad > 30 && altura > 1.8) mayores30Altos++;
    if (edad > 30) {
        sumaAlturasMayores30 += altura;
        cantidadMayores30++;
    }
    if (altura >= 1.7 && altura <= 1.8) entre17y18++;
    if (edad == 20 || edad == 30 || edad == 40) edades20_30_40++;

    // Persona 2
    cout << "Ingrese la edad de la persona 2: ";
    cin >> edad;
    cout << "Ingrese la altura de la persona 2 (en metros): ";
    cin >> altura;

    if (edad > 30 && altura > 1.8) mayores30Altos++;
    if (edad > 30) {
        sumaAlturasMayores30 += altura;
        cantidadMayores30++;
    }
    if (altura >= 1.7 && altura <= 1.8) entre17y18++;
    if (edad == 20 || edad == 30 || edad == 40) edades20_30_40++;

    // Persona 3
    cout << "Ingrese la edad de la persona 3: ";
    cin >> edad;
    cout << "Ingrese la altura de la persona 3 (en metros): ";
    cin >> altura;

    if (edad > 30 && altura > 1.8) mayores30Altos++;
    if (edad > 30) {
        sumaAlturasMayores30 += altura;
        cantidadMayores30++;
    }
    if (altura >= 1.7 && altura <= 1.8) entre17y18++;
    if (edad == 20 || edad == 30 || edad == 40) edades20_30_40++;

    // Persona 4
    cout << "Ingrese la edad de la persona 4: ";
    cin >> edad;
    cout << "Ingrese la altura de la persona 4 (en metros): ";
    cin >> altura;

    if (edad > 30 && altura > 1.8) mayores30Altos++;
    if (edad > 30) {
        sumaAlturasMayores30 += altura;
        cantidadMayores30++;
    }
    if (altura >= 1.7 && altura <= 1.8) entre17y18++;
    if (edad == 20 || edad == 30 || edad == 40) edades20_30_40++;

    // Persona 5
    cout << "Ingrese la edad de la persona 5: ";
    cin >> edad;
    cout << "Ingrese la altura de la persona 5 (en metros): ";
    cin >> altura;

    if (edad > 30 && altura > 1.8) mayores30Altos++;
    if (edad > 30) {
        sumaAlturasMayores30 += altura;
        cantidadMayores30++;
    }
    if (altura >= 1.7 && altura <= 1.8) entre17y18++;
    if (edad == 20 || edad == 30 || edad == 40) edades20_30_40++;

    // Calculo del promedio de alturas
    float promedioAltura = (cantidadMayores30 > 0) ? sumaAlturasMayores30 / cantidadMayores30 : 0;

    // Resultados
    cout << "\nResultados:\n";
    cout << "Mayores de 30 años y más de 1.8 m: " << mayores30Altos << endl;
    cout << "Promedio de altura (mayores de 30): " << promedioAltura << endl;
    cout << "Altura entre 1.7 y 1.8 m: " << entre17y18 << endl;
    cout << "Edad 20, 30 o 40 años: " << edades20_30_40 << endl;

    return 0;
}
