#include <iostream>
using namespace std;
int main(){


    int maximo , anterior , actual;

    do{
      cout << "Ingrese el numero: " << endl;
      cin >> anterior;

    } while (false);

    maximo = anterior;

    cout << "Ingres el numero: " << endl;
    cin >> actual;

    while (actual != anterior){
        if (actual > maximo){
            maximo = actual;
        }
        anterior = actual;
        
        cout << "Ingres el numero: " << endl;
        cin >> actual;
    }
    
    cout << "El numero maximo es: " << maximo << endl;
    

    return 0;
}