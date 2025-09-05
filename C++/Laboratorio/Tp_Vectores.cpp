#include <iostream>
using namespace std;

int main() {
    int AlimentosRecolectados[12];
    int TiempoEmpleado[12];
    int sumaAlimentos = 0; // Acumulador
    float promedio;
    bool Descalificados[12] = {false};

    // Ingreso de alimentos recolectados en Kg
    for (int i = 0; i < 12; i++) {
        cout << "Ingrese la cantidad de alimentos recolectados (Kg) del participante " << i + 1 << ": ";
        cin >> AlimentosRecolectados[i];
    }

    // Ingreso de tiempo empleado
    for (int i = 0; i < 12; i++) {
        cout << "Ingrese el tiempo empleado en la construccion del refugio (Dias) del participante " << i + 1 << ": ";
        cin >> TiempoEmpleado[i];
    }

    // Evaluación de descalificación
    for (int i = 0; i < 12; i++) {
        if (TiempoEmpleado[i] >= 7) {
            TiempoEmpleado[i] = 0;
            Descalificados[i] = true;
        }

        // Si juntó menos de 2 Kg, también queda descalificado
        if (AlimentosRecolectados[i] < 2) {
            Descalificados[i] = true;
        }
    }

    // Promedio 
    for (int i = 0; i < 12; i++) {
        sumaAlimentos += AlimentosRecolectados[i];
    }
    promedio = (float)sumaAlimentos / 12.0;

    // Más rápido en construir el refugio
    int minTiempo = TiempoEmpleado[0];
    int ParticipanteMasRapido = 0;
    for (int i = 1; i < 12; i++) {
        if (TiempoEmpleado[i] < minTiempo) {
            minTiempo = TiempoEmpleado[i];
            ParticipanteMasRapido = i;
        }
    }

    // Contar los participantes que no llegaron a completar su refugio
    int partNoRefugio = 0;
    for (int i = 0; i < 12; i++){
        if (TiempoEmpleado[i] == 0){
            partNoRefugio++;
        }
    }
    

    // Salida
    cout << "\n========== RESULTADOS ==========\n";

    // Estado de cada participante
    for (int i = 0; i < 12; i++) {
        cout << "Participante " << i + 1 << " -> ";
        if (Descalificados[i]) {
            cout << "Descalificado, ";
        } else {
            cout << "Clasificado, ";
        }
        cout << "Alimentos: " << AlimentosRecolectados[i] << " Kg, "
             << "Tiempo: " << TiempoEmpleado[i] << " dias\n";
    }

    // Promedio
    cout << "\nPromedio de alimentos recolectados: " << promedio << " Kg\n";

    // Participantes por debajo del promedio
    cout << "Participantes por debajo del promedio:\n";
    for (int i = 0; i < 12; i++) {
        if (AlimentosRecolectados[i] < promedio) {
            cout << " - Participante " << i + 1 << " con " << AlimentosRecolectados[i] << " Kg\n";
        }
    }

    // Más rápido
    cout << "\nEl participante mas rapido fue el " << ParticipanteMasRapido + 1 << " con " << minTiempo << " dias.\n";
    cout << "La cantidad de participantes que no llegaron a completar su refugio es: " << partNoRefugio << endl;
    

    return 0;
}

