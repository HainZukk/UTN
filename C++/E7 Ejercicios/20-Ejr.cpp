/*
Dadas dos listas de 5 números cada una y sin números repetidos, cargarlas en dos vectores. Generar un tercer vector que contenga los elementos de ambos vectores intercalados. Mostrar en pantalla el nuevo vector.
Vector 1: [8, 10, -3, 5, 7]
Vector 2: [20, -8, 10, 9, 3]
Vector 3: [8, 20, 10, -8, -3, 10, 5, 9, 7, 3]
*/

#include <iostream>
using namespace std;

void CargarVectores(int v1[] , int v2[] , int tam){

    cout << "Ingrese los primeros numeros para el primer vector: " << endl;
    for (int i = 0; i < tam; i++){
        cout << "Numero " << i + 1 << ": ";
        cin >> v1[i];
    }

    cout << "Ingrese los segundos numeros para el segundo vector: " << endl;
    for (int i = 0; i < tam; i++){
        cout << "Numero " << i + 1 << ": ";
        cin >> v2[i];
    }
}

void IntercalarVectores(int v1[] , int v2[] , int v3[] , int tam){
    
    int j = 0;
    
    for (int i = 0; i < tam; i++){
        v3[j++] = v1[i];
        v3[j++] = v2[i];
    }
    
}

void MostrarVector(string nombre,int v[] , int tam){
    cout << "Vector resultante: [ ";
    for (int i = 0; i < tam; i++){
        cout << v[i] << " ";
    }
    cout << " ]" << endl;
    
}

int main(){

    const int TAM = 5;
    const int TAM_V3 = 10;
    int v1[TAM] , v2[TAM] , v3[TAM_V3];

    CargarVectores(v1,v2,TAM);
    IntercalarVectores(v1,v2,v3,TAM);
    MostrarVector("Vector 1: ",v1,TAM);
    MostrarVector("Vector 2: ",v2,TAM);
    MostrarVector("Vector 3: ",v3,TAM_V3);

    return 0;
}