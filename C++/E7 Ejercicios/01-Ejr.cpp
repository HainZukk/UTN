#include <iostream>
using namespace std;
int main(){
    
    //Declaramos el vector / array en 10
    int Numeros[10];
    int suma = 0;

    for (int i = 0; i < 10; i++){
    cout << "Ingrese el numero " << i + 1 << ": ";
    cin >> Numeros[i]; 
    suma += Numeros[i];
    }

    cout << "La suma de los numeros en el vectores es: " << suma << endl;
    
    return 0;
}