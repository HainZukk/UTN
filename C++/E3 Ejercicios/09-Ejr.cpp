#include <iostream>
using namespace std;
int main  (){

    int num;
    int maximo;

    cout << "Ingrese 10 números:\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << "Número " << i << ": ";
        cin >> num;

        if (i == 1 || num > maximo)
        {
            maximo = num;

        }
        
        
    }
    
    cout << "\nEl número máximo es: " << maximo << endl;

    return 0;
}