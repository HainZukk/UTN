#include <iostream>
using namespace std;
int main(){

    const int TAM = 4000000;
    int *lista = nullptr;

    //pedimos memoria
    lista = new int[TAM];

    if (lista == nullptr){
        cout << "No hay memoria" << endl;
        return 1;
    }

    lista[0] = 1000;
    cout << lista[0];

    // liberamos memoria
    delete [] lista;

    return 0;
}