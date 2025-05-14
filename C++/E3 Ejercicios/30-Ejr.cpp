#include <iostream>
using namespace std;
int main (){

    int numero;
    int anterior_primo = -1;
    int hay_desorden = 0;
    int contador_primos = 0;
    int es_primo;
    
    cout << "Ingrese 7 numeros enteros distintos:" << endl;
    
    for (int i = 0; i < 7; i++){
        cin >> numero;
        if (numero < 2){
            es_primo = 0;
        }
        else{
            es_primo= 1;
            for (int j = 2; j * j <= numero; j++){
                if (numero % j == 0){
                    es_primo = 0;
                    break;
                }
                
            }
        }
        
        if (es_primo == 1) {
            contador_primos++;

            if (anterior_primo != -1 && numero < anterior_primo) {
                hay_desorden = 1;
            }
            anterior_primo = numero;
        }
    }
    if (contador_primos == 0) {
        cout << "No se ingresaron numeros primos." << endl;
    } else if (hay_desorden == 1) {
        cout << "Desordenados" << endl;
    } else {
        cout << "Ordenados" << endl;
    }

    return 0;
}