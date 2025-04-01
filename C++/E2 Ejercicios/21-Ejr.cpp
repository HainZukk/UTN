#include <iostream>
using namespace std;

int main() {
    int blancas = 45, negras = 50, marrones = 40, grises = 49;
    int cantidad, tipo, totalVendidas = 0;

    cout << "Venta 1:\n";
    cout << "Ingrese la cantidad de carteras (1 a 10): ";
    cin >> cantidad;
    cout << "Ingrese el tipo de cartera (1 - Blanco, 2 - Negro, 3 - Marrón, 4 - Gris): ";
    cin >> tipo;

    switch (tipo) {
        case 1:
            if (cantidad <= blancas) {
                blancas -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras blancas.\n";
            }
            break;
        case 2:
            if (cantidad <= negras) {
                negras -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras negras.\n";
            }
            break;
        case 3:
            if (cantidad <= marrones) {
                marrones -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras marrones.\n";
            }
            break;
        case 4:
            if (cantidad <= grises) {
                grises -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras grises.\n";
            }
            break;
        default:
            cout << "Tipo de cartera inválido.\n";
            break;
    }

    cout << "\nVenta 2:\n";
    cout << "Ingrese la cantidad de carteras (1 a 10): ";
    cin >> cantidad;
    cout << "Ingrese el tipo de cartera (1 - Blanco, 2 - Negro, 3 - Marrón, 4 - Gris): ";
    cin >> tipo;

    switch (tipo) {
        case 1:
            if (cantidad <= blancas) {
                blancas -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras blancas.\n";
            }
            break;
        case 2:
            if (cantidad <= negras) {
                negras -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras negras.\n";
            }
            break;
        case 3:
            if (cantidad <= marrones) {
                marrones -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras marrones.\n";
            }
            break;
        case 4:
            if (cantidad <= grises) {
                grises -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras grises.\n";
            }
            break;
        default:
            cout << "Tipo de cartera inválido.\n";
            break;
    }

    cout << "\nVenta 3:\n";
    cout << "Ingrese la cantidad de carteras (1 a 10): ";
    cin >> cantidad;
    cout << "Ingrese el tipo de cartera (1 - Blanco, 2 - Negro, 3 - Marrón, 4 - Gris): ";
    cin >> tipo;

    switch (tipo) {
        case 1:
            if (cantidad <= blancas) {
                blancas -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras blancas.\n";
            }
            break;
        case 2:
            if (cantidad <= negras) {
                negras -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras negras.\n";
            }
            break;
        case 3:
            if (cantidad <= marrones) {
                marrones -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras marrones.\n";
            }
            break;
        case 4:
            if (cantidad <= grises) {
                grises -= cantidad;
                totalVendidas += cantidad;
            } else {
                cout << "No hay suficientes carteras grises.\n";
            }
            break;
        default:
            cout << "Tipo de cartera inválido.\n";
            break;
    }

    
    cout << "\nCantidad total de carteras vendidas: " << totalVendidas << endl;
    cout << "Carteras restantes:\n";
    cout << "Blancas: " << blancas << endl;
    cout << "Negras: " << negras << endl;
    cout << "Marrones: " << marrones << endl;
    cout << "Grises: " << grises << endl;

    cout << "\nColores que no se vendieron:\n";
    if (blancas == 45) cout << "Blanco\n";
    if (negras == 50) cout << "Negro\n";
    if (marrones == 40) cout << "Marrón\n";
    if (grises == 49) cout << "Gris\n";

    return 0;
}
