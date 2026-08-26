#include <iostream>
using namespace std;

void cargarVector(int*& items, int& cantidad);
void mostrarVector(int *items,int cantidad);
void liberarVector(int*& items);

int main(){

    int opcion;
    int cantidad;
    int *items = nullptr;

    do{
        cout << "------------------------------" << endl;
        cout << " 1 - Cargar Vector" << endl;
        cout << " 2 - Mostrar Vector" << endl;
        cout << "------------------------------" << endl;
        cout << "0 - SALIR" << endl;
        cin >> opcion;

        switch (opcion){
        case 1:
            cargarVector(items,cantidad);
            break;
        case 2:
            mostrarVector(items,cantidad);
            break;
        case 0:
            liberarVector(items);
            cout << "Programa finalizado." << endl;
            break;
        default:
            cout << "Opcion invalida." << endl;
            break;
        }
    } while (opcion != 0);
    
    return 0;
}

void cargarVector(int *&items , int &cantidad){

    if (items != nullptr){
        delete[] items;
        items = nullptr;
    }


    cout << "Ingrese la cantidad de items a cargar: " << endl;
    cin >> cantidad;

    // reservamos memoria 
    items = new int[cantidad];
    for (int i = 0; i < cantidad; i++){
        cout << "Ingrese el item: " << i << endl;
        cin >>  items[i];
    }
}

void mostrarVector(int *items,int cantidad){
    if (items == nullptr) {
        cout << "No hay ningun vector cargado." << endl;
        return;
    }
    for (int i = 0; i < cantidad; i++){
        cout << "Item en la posicion " << i <<":  " << items[i] << endl; 
    }
}

void liberarVector(int*& items) {

    if (items != nullptr) {
        delete[] items;
        items = nullptr;
    }
}