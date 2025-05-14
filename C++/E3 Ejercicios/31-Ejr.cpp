#include <iostream>
using namespace std;
int main(){

    int numero;
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    cout << "Ingrese 10 numeros enteros distintos:" << endl;
    
    for (int i = 0; i < 10; i++){
        cin >> numero;
        if (numero == max1 || numero == max2){
            continue;
        }
        if (numero > max1){   
            max2 = max1;
            max1 = numero;
        }
        else if (numero > max2){
            max2 = numero;
        }       
        
    }
    if (max2 == -1) {
        cout << "No se pudo determinar un segundo máximo." << endl;
    } else {
        cout << "El valor máximo es: " << max1 << endl;
        cout << "El segundo máximo es: " << max2 << endl;
    }
    return 0;
}