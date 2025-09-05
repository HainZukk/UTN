#include <iostream>
#include "funciones.cpp"
using namespace std;

int main() {
    int AlimentosRecolectados[12];
    int TiempoEmpleado[12];
    float promedio;
    bool Descalificados[12] = {false};

    // Ingreso de alimentos recolectados en Kg
    ingresarAlimentos(AlimentosRecolectados,12);

    // Ingreso de tiempo empleado
    ingresarTiempoEmpleado(TiempoEmpleado,12);

    // Evaluación de descalificación
    evaluarDescalificados(TiempoEmpleado, AlimentosRecolectados, Descalificados, 12);

    // Promedio Punto 2
    promedio = CalcularPromedioAlimentos(AlimentosRecolectados,12);

    // Más rápido en construir el refugio Punto 4
    int minTiempo = TiempoEmpleado[0];
    int ParticipanteMasRapido = 0;
    for (int i = 1; i < 12; i++) {
        if (TiempoEmpleado[i] < minTiempo) {
            minTiempo = TiempoEmpleado[i];
            ParticipanteMasRapido = i;
        }
    }

    // Contar los participantes que no llegaron a completar su refugio Punto 5
    int partNoRefugio = 0;
    for (int i = 0; i < 12; i++){
        if (TiempoEmpleado[i] == 0){
            partNoRefugio++;
        }
    }
    
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

    // Participantes por debajo del promedio Punto 3 
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

