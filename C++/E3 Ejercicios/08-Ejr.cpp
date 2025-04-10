#include <iostream>
using namespace std;
int main (){


    int positivos = 0;
    int negativos = 0;
    int ceros = 0;
    int num;

    cout << "Ingrese 10 numeros:\n ";
    for (int i = 1; i <= 10; i++)
    {
        cout << "Número " << i << ": ";
        cin >> num;

        if (num > 0)
        {
            positivos ++;
        }
        else if (num < 0)
        {
            negativos ++;
        }
        else {
            ceros ++;
        }

        
    }

    float porcentaje_positivos = (positivos / 10.0) * 100;
    float porcentaje_negativos = (negativos / 10.0) * 100;
    float porcentaje_ceros = (ceros / 10.0) * 100;
    
    cout << "\nResultados:\n";
    cout << "Porcentaje de positivos: " << porcentaje_positivos << "%\n";
    cout << "Porcentaje de negativos: " << porcentaje_negativos << "%\n";
    cout << "Porcentaje de ceros: " << porcentaje_ceros << "%\n";


    return 0;
}