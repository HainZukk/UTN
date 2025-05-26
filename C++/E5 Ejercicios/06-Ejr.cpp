/*
Hacer una función que reciba un número entero por valor llamado día y un string llamado nombre por referencia y le asigne el nombre correspondiente según el número de día. Siendo 0 → Domingo y 6 → Sábado.
*/
#include <iostream>
using namespace std;

void AsignarNombreDia(int dia, string &nombre){

    switch(dia) {
        case 0: nombre = "Domingo"; break;
        case 1: nombre = "Lunes"; break;
        case 2: nombre = "Martes"; break;
        case 3: nombre = "Miercoles"; break;
        case 4: nombre = "Jueves"; break;
        case 5: nombre = "Viernes"; break;
        case 6: nombre = "Sabado"; break;
        default: nombre = "Dia invalido" ; break;
    }

}

int main(){

    int Dia;
    string nombreDia;

    cout << "Ingrese un número de día (0-6): ";
    cin >> Dia;

    AsignarNombreDia(Dia , nombreDia);
    cout << "El día es: " << nombreDia << endl;

    return 0;
}

