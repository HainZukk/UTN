#include <iostream>
using namespace std;
int main(){

    int n1,n2,n3;
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    //N1
    if (n1 > 0){
        positivos++;
    }else if (n1 < 0){
        negativos++;
    }
    else{
        ceros++;
    }

    // N2
     if (n2 > 0){
        positivos++;
    }else if (n2 < 0){
        negativos++;
    }
    else{
        ceros++;
    }

    // N3
     if (n3 > 0){
        positivos++;
    }else if (n3 < 0){
        negativos++;
    }
    else{
        ceros++;   
    }
    
    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl;

    return 0;
}