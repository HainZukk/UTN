#include <iostream>
using namespace std;

int main() {
    const int TOTAL_MOVIMIENTOS = 14;
    int numero, dia;
    char tipo;
    double importe;

    double saldo = 0.0;
    int extracciones = 0, depositos = 0;
    double mayorDeposito = -1;
    int diaMayorDeposito = 0, numMayorDeposito = 0;
    int movimientosDia10 = 0;

    for (int i = 0; i < TOTAL_MOVIMIENTOS; i++) {
        cout << "Movimiento #" << i + 1 << endl;
        cout << "Número de movimiento: ";
        cin >> numero;
        cout << "Día: ";
        cin >> dia;
        cout << "Tipo (D - Depósito / E - Extracción): ";
        cin >> tipo;
        cin.ignore(10000, '\n'); // Limpiar el buffer de entrada
        cout << "Importe: ";
        cin >> importe;

        
        if (tipo == 'D' || tipo == 'd') {
            saldo += importe;
            depositos++;

            // Mayor depósito
            if (importe > mayorDeposito) {
                mayorDeposito = importe;
                diaMayorDeposito = dia;
                numMayorDeposito = numero;
            }
        } else if (tipo == 'E' || tipo == 'e') {
            saldo -= importe;
            extracciones++;
        } else {
            cout << "Tipo inválido. Se ignora este movimiento.\n";
            continue;
        }
        if (dia == 10) {
            movimientosDia10++;
        }

        cout << "-----------------------------\n";
    }
    double porcentajeExtraccion = (extracciones * 100.0) / TOTAL_MOVIMIENTOS;
    double porcentajeDeposito = (depositos * 100.0) / TOTAL_MOVIMIENTOS;
    
    cout << "\n=== Resultados ===\n";
    cout << "Saldo final: $" << saldo << endl;
    cout << "Porcentaje de extracciones: " << porcentajeExtraccion << "%" << endl;
    cout << "Porcentaje de depósitos: " << porcentajeDeposito << "%" << endl;
    cout << "Mayor depósito: $" << mayorDeposito << " (Día " << diaMayorDeposito
         << ", Movimiento #" << numMayorDeposito << ")\n";
    cout << "Cantidad de movimientos del día 10: " << movimientosDia10 << endl;

    return 0;
}
