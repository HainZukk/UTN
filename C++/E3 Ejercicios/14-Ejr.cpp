/*
Dada una lista de 7 números enteros informar cual es el primer, el segundo, el anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteúltimo impar: 9 y Último impar: 5.
*/

#include <iostream>
using namespace std;
int main(){


    int num , primer_impar , segundo_impar , anteultimo_impar , ultimo_impar;
    int cantidad_impares = 0;

    for (int i = 1; i <= 7; i++)
    {
        cout << "Ingrese el numero " << i << ": ";
        cin >> num;

        if (num % 2 != 0)
        {
            cantidad_impares ++;
            if(cantidad_impares == 1){
                primer_impar = num;
            }
            else if (cantidad_impares == 2)
            {
                segundo_impar = num;
            }
            anteultimo_impar = ultimo_impar;
            ultimo_impar = num;
        }
        
    }
    
    if (cantidad_impares >= 2) {
        cout << "Primer impar: " << primer_impar << endl;
        cout << "Segundo impar: " << segundo_impar << endl;

        if (cantidad_impares >= 2) {
            cout << "Anteúltimo impar: " << anteultimo_impar << endl;
            cout << "Último impar: " << ultimo_impar << endl;
        }
    } else {
        cout << "No se ingresaron suficientes números impares." << endl;
    }




    return 0;
}