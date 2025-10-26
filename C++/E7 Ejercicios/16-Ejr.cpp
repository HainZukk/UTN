#include <iostream>
using namespace std;

bool Repetidos(int vec[],int TAM){

    for (int i = 0; i < TAM; i++){
        for (int j = i + 1; j < TAM; j++){
            if (vec[i] == vec[j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    const int TAM = 10;
    int vec[TAM];
    
    cout << "Ingrese los 10 numeros a identificar: " << endl;
    for (int i = 0; i < TAM; i++){
        cin >> vec[i];
    }

    if (Repetidos(vec,TAM)){
        cout << "Hay repetidos" << endl;
    }
    else{
        cout << "No hay repetidos" << endl;
    }
    
    
    

    return 0;
}