/*
Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego de cargar todas las notas:
- Pedir un número y mostrar por pantalla la nota registrada. Por ejemplo, se ingresa 10 para mostrar el décimo examen.
- Listar cuántos estudiantes obtuvieron una nota mayor al promedio.
*/




#include <iostream>
using namespace std;
int main(){


    const int TAM = 5;
    int estudiantes[TAM];
    int nota;


    cout << "Ingrese las notas de los 78 alumnos: " << endl;
    for (int i = 0; i < TAM; i++){
        cout << "Ingrese la nota " << i  + 1 << endl;
        cin >> estudiantes[i];
    }
    
    cout << "Ingrese un numero del 1 al 78: " << endl;
    cin >> nota;

    cout << "La nota corresponde a: " << estudiantes[nota] << endl;

    return 0;
}