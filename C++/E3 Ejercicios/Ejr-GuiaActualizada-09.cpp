#include <iostream>
using namespace std;
int main(){

    int numeros[10];
    int positivos = 0 , negativos = 0, ceros = 0;
    float porcentaje_positivos, porcentaje_negativos,porcentaje_ceros;

    for (int i = 0; i < 10; i++){
        cout << "Ingrese el N: " << i + 1 << endl;
        cin >> numeros[i];

        if (numeros[i] > 0){
            positivos++;
        }
        else if (numeros[i] < 0){
            negativos++;
        }
        else{
            ceros++;
        }
    }

    // Porcentajes
    porcentaje_positivos = (float)positivos / 10 * 100;
    porcentaje_negativos = (float)negativos / 10 * 100;
    porcentaje_ceros = (float)ceros / 10 * 100;

    cout << "El porcentaje de positivos es: " << porcentaje_positivos <<"%"<< endl; 
    cout << "El porcentaje de positivos es: " << porcentaje_negativos <<"%"<<endl;
    cout << "El porcentaje de positivos es: " << porcentaje_ceros  <<"%"<<endl;
    return 0;
}