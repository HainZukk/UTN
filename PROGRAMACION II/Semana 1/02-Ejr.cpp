#include <iostream>
using namespace std;


void quitarRepetidos(int vecSinProcesar[],int vecProcesado, int TAM){

    for (int i = 0; i < TAM; i++){
        for (int j = 0; i < TAM; j++){
            if (vecSinProcesar[i] != vecSinProcesar[j + 1]){
                
            }
            
        }
        
    }

}



int main(){

    const int TAM = 10;
    int vectorSinProcesar[TAM] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 };
    int vectorSinRepetidos[TAM];

    return 0;
}


