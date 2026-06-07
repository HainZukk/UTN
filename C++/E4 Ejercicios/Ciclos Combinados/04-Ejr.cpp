#include <iostream>
using namespace std;
int main(){
    int n, grupo = 1;
    int maxPar, maxImpar;
    int contPositivos, contNegativos, contTotal;
    float porcentajePositivos, porcentajeNegativos;
    //Punto c
    int totalPositivos = 0;
    //Punto d
    int contImparPositivos;
    float porcentajeImparPos;
    float maxPorcentajeImparPos = -1;
    int grupoGanador = 0;
    //Punto e
    int gruposOrdenados = 0;
    bool estaOrdenado;
    bool esPrimero;
    int anterior;

    while (grupo <= 10){
        maxPar = INT_MIN;
        maxImpar = INT_MIN;
        contPositivos = 0;
        contNegativos = 0;
        contTotal = 0;
        contImparPositivos = 0;
        estaOrdenado = true;
        esPrimero = true;

        cout << "Ingrese el numero o 'cero' para pasar al siguiente grupo: " << endl;
        cin >> n;

        while (n != 0){
            if (n % 2 == 0){
                if (n > maxPar){
                    maxPar = n;
                }
            } else {
                if (n > maxImpar){
                    maxImpar = n;
                }
            }

            if (n > 0){
                contPositivos++;
                totalPositivos++;
            } else {
                contNegativos++;
            }

            if (n > 0 && n % 2 != 0){
                contImparPositivos++;
            }

            if (esPrimero){
                anterior = n;
                esPrimero = false;
            } else {
                if (n > anterior){
                    estaOrdenado = false;
                }
                anterior = n;
            }

            contTotal++;
            cout << "Ingrese el numero o 'cero' para pasar al siguiente grupo: " << endl;
            cin >> n;
        }

        if (contTotal == 0){
            cout << "Grupo: " << grupo << " - vacio" << endl;
        } else {
            porcentajePositivos = (float)contPositivos * 100 / contTotal;
            porcentajeNegativos = (float)contNegativos * 100 / contTotal;

            porcentajeImparPos = (float)contImparPositivos * 100 / contTotal;
            if (porcentajeImparPos > maxPorcentajeImparPos){
                maxPorcentajeImparPos = porcentajeImparPos;
                grupoGanador = grupo;
            }

            if (estaOrdenado){
                gruposOrdenados++;
            }

            cout << "Grupo: " << grupo << endl;
            cout << "Maximo par: " << maxPar << endl;
            cout << "Maximo impar: " << maxImpar << endl;
            cout << "Porcentaje positivos: " << porcentajePositivos << "%" << endl;
            cout << "Porcentaje negativos: " << porcentajeNegativos << "%" << endl;
        }

        grupo++;
    }

    cout << "Total de positivos entre los 10 grupos: " << totalPositivos << endl;
    cout << "Grupo con mayor porcentaje de impares positivos: " << grupoGanador << endl;
    cout << "Grupos ordenados de mayor a menor: " << gruposOrdenados << endl;

    return 0;
}