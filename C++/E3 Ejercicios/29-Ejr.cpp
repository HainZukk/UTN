#include <iostream>
using namespace std;

int main() {
    int total_partidos = 19;
    int numero_partido, minutos, amarillas, rojas, goles;

    int partidosNoJugados = 0;
    int partidosCompletos = 0;
    int totalTarjetas = 0;
    int mayorGoles = -1;
    int partidoMayorGoles = -1;
    int rachaActual = 0;
    int mejorRacha = 0;

    for (int i = 0; i < total_partidos; i++) {
        cout << "\nIngrese los datos del partido " << (i + 1) << ":" << endl;
        cout << "Numero de partido: ";
        cin >> numero_partido;

        cout << "Minutos jugados: ";
        cin >> minutos;

        cout << "Tarjetas amarillas: ";
        cin >> amarillas;

        cout << "Tarjetas rojas: ";
        cin >> rojas;

        cout << "Goles: ";
        cin >> goles;

        if (minutos == 0) {
            partidosNoJugados++;
        }

        if (minutos >= 90) {
            partidosCompletos++;
        }

        totalTarjetas += amarillas + rojas;

        if (goles > mayorGoles) {
            mayorGoles = goles;
            partidoMayorGoles = numero_partido;
        }

        if (goles > 0) {
            rachaActual++;
            if (rachaActual > mejorRacha) {
                mejorRacha = rachaActual;
            }
        } else {
            rachaActual = 0;
        }
    }

    float promedioTarjetas = (float)totalTarjetas / total_partidos;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Partidos no jugados: " << partidosNoJugados << endl;
    cout << "Partidos jugados por completo (90 min): " << partidosCompletos << endl;
    cout << "Promedio de tarjetas por partido: " << promedioTarjetas << endl;
    cout << "Partido con más goles: " << partidoMayorGoles << " (Goles: " << mayorGoles << ")" << endl;
    cout << "Mejor racha de partidos convirtiendo goles: " << mejorRacha << endl;

    return 0;
}
