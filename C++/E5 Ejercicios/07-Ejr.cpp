#include <iostream>
using namespace std;

void CalcularMaximoAbsoluto(int a,int b){

 int valorA;
 int valorB;
 int maximo;

 if (a < 0){
    valorA = -a;
 }
 else{
    valorA = a;
 }
 if (b < 0){
    valorB = -b;
 }
 else{
    valorB = b;
 }

 if (valorA > valorB){
    maximo = valorA;
 }
 else{
    maximo = valorB;
 }
 cout << "El maximo absoluto es : " << maximo << endl;
}


int main(){

    int num1,num2;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    CalcularMaximoAbsoluto(num1,num2);

    return 0;
}