#include <iostream>
using namespace std;
int main(){

    const int DIAS = 5;
    int monto_maximo;
    int total = 0;
    int gasto;
    int dias_exedidos = 0;
    int primerDiaExedido = 0;
    float porcentaje;
    float promedio;
    bool fueEncontrado = false;

    cout << "Ingrese el monto maximo permitido por dia: " << endl;
    cin >> monto_maximo;

    for (int i = 1; i <= DIAS; i++){
        cout << "Dia: " << i << endl;
        cout << "Ingrese el gasto del dia: ";
        cin >> gasto;
        total += gasto;
        if (gasto > monto_maximo){
            dias_exedidos++;
            if (!fueEncontrado){
                primerDiaExedido = i;
                fueEncontrado = true;
            }
        }
    }

    porcentaje = float(dias_exedidos * 100) / DIAS;
    promedio = float(total) / DIAS;

    cout << "Total gastado en los 5 dias: " << total << endl;
    cout << "Porcentaje de dias que superaron el tope: " << porcentaje << endl;

    if (!fueEncontrado){
        cout << "Nunca se exedio el monto maximo" << endl;
    } else {
        cout << "Primer dia que se supero el tope: " << primerDiaExedido << endl;
    }
    cout << "Promedio de gastos por dia: " << promedio << endl;


    return 0;
}