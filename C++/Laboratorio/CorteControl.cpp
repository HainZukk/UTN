#include <iostream>
using namespace std;
int main(){

    int cantidad , articulo;
    int artActual, totalCantidad;

    cout << "Ingrese numero de articulo y cantidad: " << endl;
    cin >> articulo >> cantidad;

    while (articulo != 0){
        artActual = articulo;
        totalCantidad = 0;

        while (articulo == artActual && articulo != 0){
            totalCantidad += cantidad;
            cin >> articulo >> cantidad;
        }
        cout << "Articulo " << artActual << ": total vendido = "
             << totalCantidad << endl;
    }


    return 0;
}