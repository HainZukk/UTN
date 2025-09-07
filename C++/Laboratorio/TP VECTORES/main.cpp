#include <iostream>
#include <cstdlib>
#include <ctime>
#include "funciones.h"
using namespace std;

int main() {
    srand(time(0));
    /*
    Comando para compilar clang++ -std=c++14 main.cpp funciones.cpp -o main
    */

    int AlimentosRecolectados[12];
    int TiempoEmpleado[12];
    float promedio;
    bool Descalificados[12] = {false};

    // Generacion de Alimentos Aleatorios
    ingresarAlimentos(AlimentosRecolectados,12);

    // Generacion de el tiempo empleado aleatorio
    ingresarTiempoEmpleado(TiempoEmpleado,12);

    // Evaluación de descalificación
    evaluarDescalificados(TiempoEmpleado, AlimentosRecolectados, Descalificados, 12);

    // Mas rapido en la Construccion
    int ParticipanteMasRapido = MasRapidoTiempoConstruccion(TiempoEmpleado, 12);
    int minTiempo = TiempoEmpleado[ParticipanteMasRapido];


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

