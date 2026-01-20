#include <iostream>
using namespace std;

void InicializarVentas(int ventas[], int tam) {
    for (int i = 0; i < tam; i++) {
        ventas[i] = 0;
    }
}


void CargarVentas(int ventas[], int tam) {
    int articulo, cantidad;

    cout << "Ingrese el número de artículo (1 a 20, 0 para terminar): ";
    cin >> articulo;

    while (articulo != 0) {
        cout << "Ingrese la cantidad vendida: ";
        cin >> cantidad;

        if (articulo >= 1 && articulo <= tam) {
            ventas[articulo - 1] += cantidad;  
        } else {
            cout << "Número de artículo inválido." << endl;
        }

        cout << "\nIngrese el número de artículo (1 a 20, 0 para terminar): ";
        cin >> articulo;
    }
}


void MostrarMasVendido(int ventas[], int tam) {
    int maximo = ventas[0];
    int articuloMax = 1;

    for (int i = 1; i < tam; i++) {
        if (ventas[i] > maximo) {
            maximo = ventas[i];
            articuloMax = i + 1;  
        }
    }

    cout << "\nEl artículo más vendido es el número " << articuloMax;
    cout << " con un total de " << maximo << " unidades." << endl;
}


void MostrarSinVentas(int ventas[], int tam) {
    cout << "\nArtículos sin ventas: ";
    bool haySinVentas = false;

    for (int i = 0; i < tam; i++) {
        if (ventas[i] == 0) {
            cout << (i + 1) << " ";
            haySinVentas = true;
        }
    }

    if (!haySinVentas)
        cout << "Ninguno.";
    cout << endl;
}

void MostrarVentasArticulo10(int ventas[]) {
    cout << "\nUnidades vendidas del artículo 10: " << ventas[9] << endl; // posición 9 = artículo 10
}

int main() {
    const int TAM = 20;
    int ventas[TAM];

    InicializarVentas(ventas, TAM);
    CargarVentas(ventas, TAM);
    MostrarMasVendido(ventas, TAM);
    MostrarSinVentas(ventas, TAM);
    MostrarVentasArticulo10(ventas);

    return 0;
}
