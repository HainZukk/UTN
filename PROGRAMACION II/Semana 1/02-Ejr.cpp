#include <iostream>
using namespace std;

int quitarRepetidos(int vecSinProcesar[],int vecProcesado[], int TAM){

    int contador = 0;

    for (int i = 0; i < TAM; i++){
        bool yaExiste = false;

        for (int j = 0; j < contador; j++){
            if (vecSinProcesar[i] == vecProcesado[j]){
                yaExiste = true;
                break;
            } 
        }
        if (!yaExiste){
            vecProcesado[contador] = vecSinProcesar[i];
            contador++;
        }
    }
    return contador;
}

void mostrarElementosVector(int vecProcesado[],int TAM){
    for (int i = 0; i < TAM; i++){
        cout << vecProcesado[i] << endl;
    }
    cout << endl;
}



int main(){

    const int TAM = 10;
    int vectorSinProcesar[TAM] = {1,2,1,2,5,5,4,4,3,3};
    int vectorSinRepetidos[TAM];

    int elementos = quitarRepetidos(vectorSinProcesar,vectorSinRepetidos,TAM);
    cout << "Elementos sin repetir: " << elementos << endl;
    cout << "Vector sin Repetidos: " << endl;
    mostrarElementosVector(vectorSinRepetidos,elementos);


    return 0;
}


