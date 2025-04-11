#include <iostream>
using namespace std;
int main (){

    int num , primer_maximo , segundo_maximo;
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> num;

        if (i == 0)
        {
            primer_maximo = num; 
        }
        else if (i == 1)
        {
            if (num > primer_maximo)
            {
                segundo_maximo = primer_maximo;
                primer_maximo = num;
            }
            else {
                segundo_maximo = num;
            }
            
        }
        else {
            if (num > primer_maximo)
            {
                segundo_maximo = primer_maximo;
                primer_maximo = num;
            }
            else if (num > segundo_maximo)
            {
                segundo_maximo = num;
            }
        }
    }
    
    cout << "\nEl número más grande es: " << primer_maximo << endl;
    cout << "El segundo número más grande es: " << segundo_maximo << endl;
    return 0;
}