/*
La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona y tiempo determinado. Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.
NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.
*/


#include <iostream>
using namespace std;
int main (){

    int temperaturaMaxima, temperaturaMinima, amplitudTermica;
    cout << "Ingrese la temperatura máxima de ayer: ";
    cin >> temperaturaMaxima;
    cout << "Ingrese la temperatura mínima de ayer: ";
    cin >> temperaturaMinima;

    amplitudTermica = temperaturaMaxima - temperaturaMinima;

    cout << "La amplitud térmica es: " << amplitudTermica << " grados." << endl;



    return 0;
}