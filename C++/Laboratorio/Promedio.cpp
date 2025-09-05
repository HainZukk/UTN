#include <iostream>
using namespace std;
int main (){

    int n1,n2,n3;
    float promedio;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    promedio = float(n1 + n2 + n3)/ 3;
    cout << promedio;

    return 0;
}