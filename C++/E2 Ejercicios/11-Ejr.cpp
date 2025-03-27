// Hacer un programa para ingresar cinco números y listar cuantos de esos cinco números son positivos, cuantos son negativos y cuantos son iguales a 0.


#include <iostream>
using namespace std;
int main (){

    int n1,n2,n3,n4,n5;
    int positivos = 0, negativos = 0, ceros = 0;


    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    cout << "Ingrese el cuarto numero: ";
    cin >> n4;

    cout << "Ingrese el quinto numero: ";
    cin >> n5;

    if (n1 > 0){
        positivos ++;
    }
    else if (n1 < 0)
    {
        negativos ++;
    }
    else{
        ceros ++;
    }

    if (n2 > 0){
        positivos ++;
    }
    else if (n2 < 0)
    {
        negativos ++;
    }
    else{
        ceros ++;
    }

    if (n3 > 0){
        positivos ++;
    }
    else if (n3 < 0)
    {
        negativos ++;
    }
    else{
        ceros ++;
    }

    if (n4 > 0){
        positivos ++;
    }
    else if (n4 < 0)
    {
        negativos ++;
    }
    else{
        ceros ++;
    }

    if (n5 > 0){
        positivos ++;
    }
    else if (n5 < 0)
    {
        negativos ++;
    }
    else{
        ceros ++;
    }

    cout << "Cantidad de numeros positivos: " << positivos << endl;
    cout << "Cantidad de numeros negativos: " << negativos << endl;
    cout << "Cantidad de numeros iguales a 0: " << ceros << endl;
    

    return 0;

}