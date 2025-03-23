/*
El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de Micilina y 7 mg de Ácido Sinítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido Sinítico que son necesarios para elaborarlos.
*/

#include <iostream>
using namespace std;
int main (){

    int frascos;
    int totalBetamol, totalMicilina, totalAcidoSinitico;

    cout << "Ingrese la cantidad de frascos del pedido: ";
    cin >> frascos;

    totalBetamol = frascos * 75 * 45;
    totalMicilina = frascos * 75 * 2;
    totalAcidoSinitico = frascos * 75 * 7;

    cout << "Para " << frascos << " frascos se necesitan:" << endl;
    cout << "Betamol: " << totalBetamol << " mg" << endl;
    cout << "Micilina: " << totalMicilina << " mg" << endl;
    cout << "Ácido Sinítico: " << totalAcidoSinitico << " mg" << endl;



    return 0;
}