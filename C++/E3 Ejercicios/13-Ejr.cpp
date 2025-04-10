#include <iostream>
using namespace std;
int main (){


    int num;
    int max_pares;
    int cantidad_pares = 0;

    for (int i = 1; i <= 10 ; i++)
    {
        cout << "Ingrese el numero " << i << ": ";
        cin >> num;

        if (num % 2 == 0)
        {
            if (cantidad_pares == 0)
            {
                max_pares = num;
            }
            else {
                if (num > max_pares)
                {
                    max_pares = num;
                }         
            }
            cantidad_pares ++;
        }
        
    }
    
    if (cantidad_pares > 0)
    {
        cout << "El número par más grande es: " << max_pares << endl;
    }
    else {
        cout << "No ingresaste ningún número par." << endl;
    }
    
    return 0;
}
