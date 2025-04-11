#include <iostream>
using namespace std;
int main (){
    int num;
    int divisores = 0;

    cout << "Ingrese un numero entero: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0 ){
            divisores ++;
        }
        
    }
    cout << "La cantidad de divisores de " << num << " es: " << divisores << endl;
    return 0;
}
    

