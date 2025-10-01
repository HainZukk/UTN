#include <iostream>
using namespace std;

int ContadorVerdaderos(bool mi_arreglo[]){
    int verdaderos = 0;
    for (int i = 0; i < 15; i++){
        if (mi_arreglo[i] == true){
            verdaderos ++;
        }
    }
    return verdaderos;
}

int main(){

    bool mi_arreglo[15] = {true, true, true, true,false,false,false,false,false,false};
    int cantidad = ContadorVerdaderos(mi_arreglo);
    cout << cantidad;
    return 0;
}