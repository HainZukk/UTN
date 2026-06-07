#include <iostream>
using namespace std;
int main(){

    int n , contPrimos = 0 , contNoPrimos = 0;

    cout << "Ingrese un numero o 'cero' para terminar: " << endl;
    cin >> n;

    while (n != 0 ){
        
        int contDivisores = 0;

        for (int i = 1; i <= n; i++){
            if (n % i == 0){
                contDivisores++;
            }
        }
        if (contDivisores == 2){
            contPrimos++;
        }
        else{
            contNoPrimos++;
        }
        
        cout << "Ingrese un numero o 'cero' para terminar: " << endl;
        cin >> n;

    }
    
    cout << "Total de numeros primos: " << contPrimos << endl;
    cout << "Total de numeros no primos: " << contNoPrimos << endl;



    return 0;
}