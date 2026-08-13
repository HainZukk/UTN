#include <iostream>
using namespace std;


// se puede ingresar valores en un vector ---> cin>>vec[i];


void CargarElementos(int vec[],int TAM){
    int n;
    for (int i = 0; i < TAM; i++){
        cout << "Ingrese el numero: " << i << endl;
        cin >> n;
        vec[i] = n;
    }
}

void mostrarVector(int vec[],int TAM){

    for (int i = 0; i < TAM; i++){
        cout << i <<": "<< vec[i] << endl;
    }
}

void asignarVectorPares(int vec[], int TAM,int n){
    
    if (n % 2 != 0){
        n++;
    }
    for (int i = 0; i < TAM; i++){
        vec[i] = n+2*1;
    }
}


int main(){

    const int TAM = 10;
    int vec[TAM]={};
    // CargarElementos(vec,10);
    // cargarVectorPares(vec,10);
    // mostrarVector(vec,10);

    asignarVectorPares(vec,10,10);

    

    return 0;
}

// *vec puntero . -- > direccion de memoria == vec[]
// para el compilador el vec[] es un puntero ya que accede directamente a la direccion de memoria
// para enviar direccion de memoria debemos tambien volver a utilizar el & y ahi si recibe el valor .
