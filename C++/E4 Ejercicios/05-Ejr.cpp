/*
Se dispone de una lista de 10 grupos de números enteros separados entre ellos
por ceros. Se pide determinar e informar:
a) El número de grupo con mayor porcentaje de números impares positivos
respecto al total de números que forman el grupo. Se informa 1 resultado al
final.
b) Informar cuantos grupos están formados por todos números ordenados de
mayor a menor. Se informa 1 resultado al final.
*/

#include <iostream>
using namespace std;
int main (){

    int n;
    int grupoMax = 0;
    float maxPorcentaje = 0;

    for (int i = 1; i <= 10; i++){
        cout << "Ingrese los numeros para el grupo: " << i << endl;
        int imparesPositivos = 0 , total = 0;
        while (true){
            cin >> n;
            if (n == 0) break;
            total ++; // el total cuenta todos los numeros para saber luego saber el porcentaje por grupo.

            if (n > 0 && n % 2 != 0){
                imparesPositivos ++;
            }
        }
        if (total > 0){
            float porcentaje = (float)imparesPositivos / total * 100;
            if (porcentaje > maxPorcentaje){
                maxPorcentaje = porcentaje;
                grupoMax = i;
            }
        }
    }
    cout << "El grupo con mayor porcentaje de numeros positivos impares es: " << grupoMax << endl;
    return 0;
}