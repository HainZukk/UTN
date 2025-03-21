//Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas. Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.

#include <iostream>
using namespace std;
int main (){

    int ventas_A, ventas_B, ventas_C;
    int total_ventas;
    float porcentaje_A, porcentaje_B, porcentaje_C;


    cout << "Ingrese la cantidad de ventas de los alfajores A : ";
    cin >> ventas_A;

    cout << "Ingrese la cantidad de ventas de los alfajores B : ";
    cin >> ventas_B;

    cout << "Ingrese la cantidad de ventas de los alfajores C : ";
    cin >> ventas_C;

    total_ventas = ventas_A + ventas_B + ventas_C;

    porcentaje_A = (float)ventas_A / total_ventas * 100;
    porcentaje_B = (float)ventas_B / total_ventas * 100;
    porcentaje_C = (float)ventas_C / total_ventas * 100;

    cout << "La marca A se vendio un : " << porcentaje_A << "%" << endl;
    cout << "La marca B se vendio un : " << porcentaje_B << "%" << endl;
    cout << "La marca C se vendio un : " << porcentaje_C << "%" << endl;

    return 0;
}
