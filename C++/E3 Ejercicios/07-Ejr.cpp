#include <iostream>
using namespace std;
int main (){

    int numero ;
    int positivos = 0 , negativos = 0 , ceros = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;

        if (numero > 0)
        {
            positivos ++;
        }
        else if (numero < 0)
        {
            negativos ++;
        }
        else {
            ceros ++;
        }
        
        
    }
    
    cout << "Cantidad de Positivos: " << positivos << endl;
    cout << "Cantidad de Negativos: " << negativos << endl;
    cout << "Cantidad de Ceros: " << ceros << endl;
    

    return 0;
}