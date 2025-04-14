#include <iostream>
using namespace std;
int main(){
    
    int numero;

    cout << "Ingrese un numero para verificar: ";
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "El numero: " << numero << " es primo" << endl;
    }
    else {
        cout << "El numero: " << numero << " no es primo" << endl;
    }
    



    return 0;
}