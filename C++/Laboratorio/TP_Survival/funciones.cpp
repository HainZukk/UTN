#include <iostream>
#include <cstdlib>
#include "funciones.h"
using namespace std;


void menuPrincipal() {
    int opcion = 0;

    while (opcion != 2) {
        cout << "======================================================" << endl;
        cout << "Bienvenido/a al concurso de supervivencia" << endl;
        cout << "1. Juego nuevo" << endl;
        cout << "2. Salir" << endl;
        cout << "======================================================" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                system("clear");
                jugar();
                break;
            case 2:
                cout << "Saliendo del juego..." << endl;
                break;
            default:
                cout << "Opción inválida." << endl;
                break;
        }
    }
}

void jugar() {
    const int PARTICIPANTES = 8;
    const int DIAS = 7;

    float kgAlimentos[PARTICIPANTES] = {0};
    float porcentajeRefugio[PARTICIPANTES] = {0};
    bool clasificado[PARTICIPANTES] = {false};
    int eleccion;

    for (int i = 0; i < PARTICIPANTES; i++) {
        cout << "\n===== Participante " << i + 1 << " =====" << endl;
        cout << "Tiene 7 días para recolectar alimentos y construir un refugio." << endl;

        for (int j = 0; j < DIAS; j++) {
            cout << "\nDía " << j + 1 << endl;
            cout << "1. Recolectar alimentos" << endl;
            cout << "2. Recolectar materiales para el refugio" << endl;
            cout << "Elija una opción: ";
            cin >> eleccion;

            if (eleccion == 1) {
                kgAlimentos[i] += recolectarAlimentos();
            } else if (eleccion == 2) {
                porcentajeRefugio[i] += recolectarMateriales(porcentajeRefugio[i]);
                if (porcentajeRefugio[i] > 100) porcentajeRefugio[i] = 100;
            } else {
                cout << "Opción inválida. Día perdido." << endl;
            }
        }

        // Verificamos el porcentaje del refugio
        if (kgAlimentos[i] >= 14 && porcentajeRefugio[i] == 100) {
            clasificado[i] = true;
        }

        cout << "\nResumen del participante " << i + 1 << ":" << endl;
        cout << "Alimentos recolectados: " << kgAlimentos[i] << " kg" << endl;
        cout << "Avance del refugio: " << porcentajeRefugio[i] << "%" << endl;

        if (clasificado[i]) {
            cout << "Estado: Clasificado a la siguiente etapa." << endl;
        } else {
            cout << "Estado: Descalificado." << endl;
        }
    }
}

float recolectarAlimentos() {
    int tipo;
    float recolectado = 0;

    cout << "Ha elegido recolectar alimentos" << endl;
    cout << "1- Pesca en el río" << endl;
    cout << "2- Cosecha en arbustos" << endl;
    cout << "3- Cosecha en árboles" << endl;
    cin >> tipo;

    switch (tipo) {
        case 1:
            recolectado = 2 + rand() % 10; // 2 a 11 kg
            break;
        case 2:
            recolectado = 1 + rand() % 8;  // 1 a 8 kg
            break;
        case 3:
            recolectado = 3 + rand() % 12; // 3 a 14 kg
            break;
        default:
            cout << "Opción inválida." << endl;
            recolectado = 0;
            break;
    }

    cout << "Recolectaste " << recolectado << " kg de alimentos." << endl;
    return recolectado;
}

float recolectarMateriales(float porcentajeRefugio) {
    if (porcentajeRefugio >= 100) {
        cout << "Tu refugio ya está completo." << endl;
        return 0;
    }

    int tipo;
    float recolectado = 0;

    cout << "Ha elegido recolectar materiales" << endl;
    cout << "1- Ramas de árboles" << endl;
    cout << "2- Ramas de arbustos" << endl;
    cout << "3- Barro" << endl;
    cout << "4- Rocas" << endl;
    cin >> tipo;

    switch (tipo) {
        case 1: recolectado = 5 + rand() % 15; break;
        case 2: recolectado = 1 + rand() % 12; break;
        case 3: recolectado = 1 + rand() % 20; break;
        case 4: recolectado = 1 + rand() % 30; break;
        default:
            cout << "Opción inválida." << endl;
            recolectado = 0;
            break;
    }

    cout << "Recolectaste " << recolectado << "% de materiales." << endl;
    cout << "Progreso del refugio: " << porcentajeRefugio + recolectado << "%" << endl;
    system("read -n 1 -s -p \"Presiona cualquier tecla para continuar\"");
    return recolectado;
}

void mostrarResultados(float kgAlimentos, float porcentajeRefugio, const int DIAS) {
    cout << "\n--- RESULTADOS FINALES ---" << endl;
    cout << "Total de alimentos recolectados: " << kgAlimentos << " kg" << endl;
    cout << "Promedio diario de alimentos: " << kgAlimentos / DIAS << " kg" << endl;
    cout << "Porcentaje de refugio construido: " << porcentajeRefugio << "%" << endl;
    cout << "Promedio diario de materiales: " << porcentajeRefugio / DIAS << "%" << endl;
}
