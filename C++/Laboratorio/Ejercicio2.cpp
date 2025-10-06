/*
PARTE 1
Un local de juegos de mesa, está incorporando un nuevo canal de venta online, con promociones y envío sin cargo. Para poder ofrecer
estos beneficios, el monto mínimo de la compra debe ser de $50000.
● Por cada ítem del pedido, se necesita registrar:
○ Número de artículo
○ Tipo (1 = cartas, 2 = dados, 3 = tablero, 4 = figuras)
○ Monto
Hacer un programa que permita agregar ítems, simulando un carrito de compras. La carga de ítems finaliza al ingresar un ítem con
número de artículo igual a 0 (cero), siempre y cuando se haya alcanzado el valor mínimo de la compra.
Si se intenta finalizar la carga antes de alcanzar los $50000, se debe mostrar un cartel aclarando que esta operación no es posible y
continuar solicitando el ingreso de ítems.
El programa debe informar:
1. 2. 3. Los tipos de juego elegidos en el pedido.
La cantidad de ítems de la compra.
El monto total de la compra.

 */


#include <iostream>
using namespace std;
int main(){

    const int MIN_COMPRA = 50000;
    int opcion = 1;
    int eleccion;
    int nroArticulo;
    int carrito = 0; // Acumulador de compras
    int cantidadProductos = 0; // Contador de compras

    // precios
    const int cartas = 5000, dados = 1700, tablero = 11260, figuras = 20000;

    // banderas para tipos de juegos elegidos
    bool comproCartas = false, comproDados = false, comproTablero = false, comproFiguras = false;

    while (opcion != 2) {
        cout << "======================================================" << endl;
        cout << "Bienvenido a la tienda online Souder" << endl;
        cout << "1. Comprar" << endl;
        cout << "2. Salir" << endl;
        cout << "======================================================" << endl;
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Usted ha entrado en el apartado de compras" << endl;
            cout << "Ingrese el numero de articulo (0 para finalizar compra): ";
            cin >> nroArticulo;

            if (nroArticulo == 0) {
                if (carrito < MIN_COMPRA) {
                    cout << "No puede finalizar la compra, el minimo es $" << MIN_COMPRA << endl;
                } else {
                    opcion = 2; // fuerza la salida del while
                }
                break;
            }

            cout << "Seleccione el item a comprar: (1.Cartas - 2.Dados - 3.Tablero - 4.Figuras)" << endl;
            cin >> eleccion;

            if (eleccion == 1) {
                cout << "Se ha agregado al carrito exitosamente el juego de 'cartas' " << endl;
                carrito += cartas;
                cantidadProductos++;
                comproCartas = true;
            }
            else if (eleccion == 2) {
                cout << "Se ha agregado al carrito exitosamente el juego de 'dados' " << endl;
                carrito += dados;
                cantidadProductos++;
                comproDados = true;
            }
            else if (eleccion == 3) {
                cout << "Se ha agregado al carrito exitosamente el juego de 'tablero' " << endl;
                carrito += tablero;
                cantidadProductos++;
                comproTablero = true;
            }
            else if (eleccion == 4) {
                cout << "Se ha agregado al carrito exitosamente las 'figuras' " << endl;
                carrito += figuras;
                cantidadProductos++;
                comproFiguras = true;
            }
            break;

        case 2:
            if (carrito < MIN_COMPRA) {
                cout << "No puede salir sin comprar al menos $" << MIN_COMPRA << endl;
                opcion = 1; 
            } else {
                cout << "Usted ha elegido salir, muchas gracias y vuelva pronto" << endl;
            }
            break;

        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }

    cout << "======================================================" << endl;
    cout << "Su total es de: $" << carrito << endl;
    cout << "Cantidad de productos: " << cantidadProductos << endl;
    cout << "Tipos de juegos elegidos: ";
    if (comproCartas) cout << "Cartas ";
    if (comproDados) cout << "Dados ";
    if (comproTablero) cout << "Tablero ";
    if (comproFiguras) cout << "Figuras ";
    cout << endl;
    cout << "======================================================" << endl;

    return 0;
}
