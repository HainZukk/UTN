#include <iostream>
using namespace std;

int main (){
    int anio;
    
    cout << "Ingrese un año: ";
    cin  >> anio;

    if ((anio % 4 == 0 % 100 != 0) || (anio % 400 == 0)){
        cout << "El año " << anio << " es bisiesto." << endl;
    }
    else {
        cout << "El año " << anio << " no es bisiesto." << endl;
    }



    return 0;
}