#include <iostream>
using namespace std;

void validarFecha(int dia, int mes, int anio, int &resultado) {
    resultado = 0; 

    if (anio < 1) return;
    if (mes < 1 || mes > 12) return;
    if (dia < 1) return;

    int diasMes;

    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            diasMes = 31;
            break;
        case 4: case 6: case 9: case 11:
            diasMes = 30;
            break;
        case 2:
            if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
                diasMes = 29;
            else
                diasMes = 28;
            break;
        default:
            return; 
    }

    if (dia <= diasMes)
        resultado = 1;  
}

int main() {
    int d, m, a, res;

    cout << "Ingrese dia, mes y año: ";
    cin >> d >> m >> a;

    validarFecha(d, m, a, res);

    if (res == 1)
        cout << "Fecha valida." << endl;
    else
        cout << "Fecha invalida." << endl;

    return 0;
}
