#include <iostream>
using namespace std;
int main (){

    int num;
    int maximo , minimo;

    cout << "Ingrese los 10 numeros:\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << "Número " << i << ": ";
        cin >> num;

        if (i == 1)
        {
            maximo = num;
            minimo = num;
        }
        else {
            if (num > maximo )
            {
                maximo = num;
            }
            if (num < minimo)
            {
                minimo = num;
            }
            
            
        }
        
    }
    

    cout << "\nMáximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;

    return 0;
}