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

    // Promedio de almentos
    promedio = CalcularPromedioAlimentos(AlimentosRecolectados,12);

    // Mas rapido en la Construccion
    int ParticipanteMasRapido = MasRapidoTiempoConstruccion(TiempoEmpleado, 12);
    int minTiempo = TiempoEmpleado[ParticipanteMasRapido];


    cout << "\n========== RESULTADOS ==========\n";

    // Estado de cada participante
    Estado_de_Participante(Descalificados,AlimentosRecolectados,TiempoEmpleado,12);

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
    // Contar los participantes que no llegaron a completar su refugio Punto 5
    cout << "La cantidad de participantes que no llegaron a completar su refugio es: " << NoCompletaronRefugio(TiempoEmpleado,12) << endl;
    

    return 0;
}

