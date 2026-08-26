#include <iostream>
using namespace std;

void cargarArray(int vec[],int TAM);
void contar(int vec[],int &contPos,int &contNeg , int TAM);
void clasificar(int TAM,int vec[],int positives[],int negatives[]);
void mostrar(int vec[],int contadores,string nombre);


int main(){

    const int TAM = 5;
    int *positives = nullptr;
    int *negatives = nullptr;
    int contPos = 0;
    int contNeg = 0;

    int numeros[TAM] = {0};


    cargarArray(numeros,TAM);
    contar(numeros,contPos,contNeg,TAM);

    positives = new int[contPos];
    negatives = new int[contNeg];

    clasificar(TAM,numeros,positives,negatives);
    mostrar(positives,contPos,"Positivos");
    mostrar(negatives,contNeg,"Negativos");

    //liberamos memoria de la memoria pedida
    delete[] positives;
    delete[] negatives;

    return 0;
}

void cargarArray(int vec[],int TAM){

    cout << "Ingrese los numeros: " << endl;
    for (int i = 0; i < TAM; i++){
        cout << "Ingrese el " << i + 1 << " numero: ";
        cin >> vec[i];
    }
}

void contar(int vec[],int &contPos,int &contNeg , int TAM){
    for (int i = 0; i < TAM; i++){
        if (vec[i] >= 0){
            contPos++;
        }
        else{
            contNeg++;
        }
    }
}

void clasificar(int TAM,int vec[],int positives[],int negatives[]){
    int indiceNegativo = 0;
    int indicePositivo = 0;
    for (int i = 0; i < TAM; i++){
        if (vec[i] >= 0){
            positives[indicePositivo] = vec[i];
            indicePositivo++;
        }
        else{
            negatives[indiceNegativo] = vec[i];
            indiceNegativo++;
        }
    }
}

void mostrar(int vec[],int contadores,string nombre){

    cout <<"-----"<<"Puntero con " << nombre <<"-----\n";
    for (int i = 0; i < contadores; i++){
        cout << "Indice " << i <<": " << vec[i] << endl;
    }
}