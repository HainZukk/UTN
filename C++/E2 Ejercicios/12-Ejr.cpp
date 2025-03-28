/*
Hacer un programa para ingresar tres números diferentes y determinar e informar el número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 
*/


#include <iostream>
using namespace std;
int main (){

    int n1, n2, n3;

    cout << "Ingrese el primer número: ";
    cin >> n1;
    cout << "Ingrese el segundo número: ";
    cin >> n2;
    cout << "Ingrese el tercer número: ";
    cin >> n3;

    if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)){
        cout << "El número del medio es: " << n1 << endl;
    }
    else if ((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3))
    {
        cout << "El número del medio es: " << n2 << endl;
    }
    else{
        cout << "El número del medio es: " << n3 << endl;
    }
    


    return 0;
}