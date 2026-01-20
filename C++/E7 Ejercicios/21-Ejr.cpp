/*
Hacer un programa para ingresar las encuestas de edad efectuadas a 200 personas y luego listar la cantidad de personas en cada rango de edad según la siguiente tabla.

Década 0.	(Edad 1-9)	Cantidad de encuestados: 99
Década 1.	(Edad 10-19)	Cantidad de encuestados: 99
……………………………	
Década 9.	(Edad 90-99)	Cantidad de encuestados: 99
*/


#include <iostream>
using namespace std;

const int TAM = 200;

void CargarEdades(int edades[] , int tam){
    
    cout << "Ingrese las edades de las " << tam << " personas:" << endl;
    for (int i = 0; i < tam; i++){
        cout << "Edad de la persona " << i + 1 << ": ";
        cin >> edades[i];

        while (edades[i] < 1 || edades[i] > 99){
            cout << "Edad invalida. Ingrese nuevamente (1 a 99): ";
            cin >> edades[i];
        }
        
    }

}

void ContarDecadas(int edades[], int tam, int decadas[]) {
    for (int i = 0; i < 10; i++) {
        decadas[i] = 0;
    }
    for (int i = 0; i < tam; i++) {
        int decada = edades[i] / 10; 
        decadas[decada] = decadas[decada] + 1; 
    }
}

void MostrarDecadas(int decadas[]) {
    cout << "\nCantidad de personas por década:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Década " << i << " (edades " << i * 10 + 1 << " a " << i * 10 + 9 << "): ";
        cout << decadas[i] << endl;
    }
}

int main() {
    int edades[TAM];
    int decadas[10];

    CargarEdades(edades, TAM);
    ContarDecadas(edades, TAM, decadas);
    MostrarDecadas(decadas);

    return 0;
}