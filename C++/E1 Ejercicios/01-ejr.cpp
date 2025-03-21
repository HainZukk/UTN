//Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

#include <iostream>
using namespace std;
int main (){
    int horas_trabajadas;
    int pago_por_hora;
    int resultado;
    cout << "Ingrese las horas trabajadas : ";
    cin >> horas_trabajadas;
    cout << "Ingrese el pago por hora : ";
    cin >> pago_por_hora;
    resultado = horas_trabajadas * pago_por_hora;
    cout << "Su pago por todas esas horas trabajadas es : " << resultado <<endl;

    return 0;

}
