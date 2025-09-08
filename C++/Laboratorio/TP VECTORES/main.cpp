#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"
using namespace std;

int main() {
    srand(time(0));
    /*
    clang++ -std=c++14 main.cpp funciones.cpp -o main
    */

    int AlimentosRecolectados[12];
    int TiempoEmpleado[12];
    float promedio;
    bool Descalificados[12] = {false};

    ingresarAlimentos(AlimentosRecolectados,12);
    ingresarTiempoEmpleado(TiempoEmpleado,12);
    evaluarDescalificados(TiempoEmpleado, AlimentosRecolectados, Descalificados, 12);

    int ParticipanteMasRapido = MasRapidoTiempoConstruccion(TiempoEmpleado, 12);
    int minTiempo = TiempoEmpleado[ParticipanteMasRapido];

    cout << "===== MENU PRINCIPAL =====\n";
    cout << "Presione la tecla 'ENTER' para mostrar resultados..." << endl;
    cin.get();

    cout << "\n========== RESULTADOS ==========\n";

    Estado_de_Participante(Descalificados,AlimentosRecolectados,TiempoEmpleado,12);
    
    promedio = CalcularPromedioAlimentos(AlimentosRecolectados,12);
    cout << "\nPromedio de alimentos recolectados: " << promedio << " Kg\n";

    cout << "Participantes por debajo del promedio:\n";
    Debajo_Promedio(AlimentosRecolectados,12,promedio);

    cout << "\nEl participante mas rapido fue el " << ParticipanteMasRapido + 1 << " con " << minTiempo << " dias.\n";
    
    cout << "La cantidad de participantes que no llegaron a completar su refugio es: " << NoCompletaronRefugio(TiempoEmpleado,12) << endl;

    return 0;
}

