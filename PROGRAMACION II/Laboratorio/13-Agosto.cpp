#include <iostream>
using namespace std;
int main(){

    // La matriz se declara por ejemplo vec[1][2];

    // int matriz[3][4];

    // declaracion de matriz
    // int matriz[3][4] = {{1,2,3,4},{1,6,2,200},{3,6,14,26}};
    int matriz[3][4] = {};
    int i,j;
    int sucursal , producto;



    cout << "ingrese una sucursal" << endl;
    cin >> sucursal;

    while (sucursal != 0){
        cout << "Codigo de producto: ";
        cin >> producto;

        matriz[sucursal-1][producto-1]++;

        cout << "ingrese una sucursal" << endl;
        cin >> sucursal;
    }
    
    // para recorrer las matrices debemos de utilizar 2 ciclos for
    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    

    // matriz[0][0] = 100;
    // matriz[2][3] = 200;



    return 0;
}