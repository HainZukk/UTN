// Leer 10 números y guardarlos en un vector. Calcular el promedio y luego mostrar por pantalla los valores que son mayores al promedio.

#include <iostream>
using namespace std;


void LecturaNums(){

    int suma = 0;
    int mayores_al_promedio[5];

    const int TAMANIO = 5;
    int vec[TAMANIO] = {1,3,70,60,1};

    for (int i = 0; i < TAMANIO; i++){
        suma += vec[i];
    }

    float promedio = float(suma) / TAMANIO;

    for (int i = 0; i < TAMANIO; i++){
        if (vec[i] > promedio){
            cout << vec[i] << endl;
        }
    }
    cout << endl;

}

int main (){


    LecturaNums();

    return 0;
}

