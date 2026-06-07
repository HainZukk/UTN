#include <iostream>
using namespace std;


int main(){

    int n;
    int contPerfectos = 0;


    for (int i = 1; i <= 10; i++){
        cout << "Ingrese el numero: " << i << endl;
        cin >> n;

        int sumaDivisores = 0; //Declaramos el contador aca para que se reinicie con cada numero.

        for (int j = 1; j < n; j++){
            if (n % j == 0){
                sumaDivisores += j;
            }
            
        }
        if (sumaDivisores == n){
            contPerfectos ++;
        }
    }

    cout << "La cantidad de numeros perfectos es de : " << contPerfectos << endl;

    return 0;
}