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

        // Resumen para cada participante del evento survival
        cout << "\nResumen del participante " << i + 1 << ":" << endl;
        cout << "Alimentos recolectados: " << kgAlimentos[i] << " kg" << endl;
        cout << "Avance del refugio: " << porcentajeRefugio[i] << "%" << endl;

        if (clasificado[i]) {
            cout << "Estado: Clasificado a la siguiente etapa." << endl;
        } else {
            cout << "Estado: Descalificado." << endl;
        }
    }

    // Etapa 2
    Construir_Balsa(kgAlimentos, clasificado);

    // mostrarResumen(kgAlimentos, porcentajeRefugio, porcentajeBalsa, ExcedenteAlimento, clasificado, PARTICIPANTES);
}

// Generar datos random - Sab 01 Noviembre
int generarRandom(int min, int max) {
    return min + rand() % (max - min + 1);
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
            recolectado = generarRandom(2,10);
            break;
        case 2:
            recolectado = generarRandom(1,8);
            break;
        case 3:
            recolectado = generarRandom(3,14);
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
        case 1: 
            recolectado = generarRandom(5,15); 
            break;
        case 2: 
            recolectado = generarRandom(1,12); 
            break;
        case 3: 
            recolectado = generarRandom(1,20);
            break;
        case 4: 
            recolectado = generarRandom(1,30);
            break;
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

//Nueva funcion de resumen de todas las etapas
// void mostrarResumen(float kgAlimentos[], float porcentajeRefugio[], float porcentajeBalsa[], float ExcedenteAlimento[], bool clasificado[], int PARTICIPANTES) {
//     cout << "\n===== RESUMEN DEL CONCURSO =====" << endl;
//     for (int i = 0; i < PARTICIPANTES; i++) {
//         cout << "\n--- Participante " << i + 1 << " ---" << endl;
//         cout << "Etapa 1:" << endl;
//         cout << "  Alimentos recolectados: " << kgAlimentos[i] << " kg" << endl;
//         cout << "  Porcentaje de refugio construido: " << porcentajeRefugio[i] << "%" << endl;

//         cout << "Etapa 2:" << endl;
//         cout << "  Porcentaje de balsa construido: " << porcentajeBalsa[i] << "%" << endl;
//         cout << "  Excedente de alimentos: " << ExcedenteAlimento[i] << " kg" << endl;

//         cout << "Estado final: ";
//         if (clasificado[i]) {
//             cout << "✔ Clasificado para la siguiente etapa" << endl;
//         } else {
//             cout << "✖ Descalificado" << endl;
//         }
//     }
// }

// Etapa 2: 

void Construir_Balsa(float ExcedenteAlimento[], bool Clasificados[]) {
    const int PARTICIPANTES = 8;
    const int DIAS = 6;
    const float ALIMENTO_MINIMO = 14.0;
    float kgAlimentos[PARTICIPANTES] = {0};
    float porcentajeBalsa[PARTICIPANTES] = {0};
    int tiempoBalsa[PARTICIPANTES] = {0};
    int eleccion, material;

    srand(time(NULL)); 

    for (int i = 0; i < PARTICIPANTES; i++) {
        if (!Clasificados[i]) {
            continue;
        }

        cout << "\n===== Etapa 2 - Participante " << i + 1 << " =====" << endl;

        kgAlimentos[i] = ExcedenteAlimento[i];

        for (int dia = 1; dia <= DIAS; dia++) {
            cout << "\nDía " << dia << " de 6" << endl;

            if (porcentajeBalsa[i] < 100) {
                cout << "1. Recolectar alimentos" << endl;
                cout << "2. Construir balsa" << endl;
                cin >> eleccion;
            } else {
                cout << "Balsa completa. Solo puede recolectar alimentos." << endl;
                eleccion = 1;
            }

            if (eleccion == 1) {
                float recolectado = 2 + rand() % 6;
                kgAlimentos[i] += recolectado;
                cout << "Recolectó " << recolectado << " kg de alimentos. Total: " << kgAlimentos[i] << " kg" << endl;
            }
            else if (eleccion == 2 && porcentajeBalsa[i] < 100) {
                cout << "Materiales disponibles:" << endl;
                cout << "1. Troncos de árboles (20-35%)" << endl;
                cout << "2. Hojas de palmera (10-20%)" << endl;
                cout << "3. Caña (15-25%)" << endl;
                cin >> material;

                float avance = 0;
                switch (material) {
                    case 1: 
                        avance = generarRandom(20,16);
                        break;
                    case 2: 
                        avance = generarRandom(10,11);
                        break;
                    case 3: 
                        avance = generarRandom(10,11);
                        break;
                    default:
                        cout << "Opción inválida. Se pierde el día." << endl;
                        continue;
                }

                porcentajeBalsa[i] += avance;
                if (porcentajeBalsa[i] > 100) porcentajeBalsa[i] = 100;

                tiempoBalsa[i]++;
                cout << "Avance en la construcción: " << porcentajeBalsa[i] << "%" << endl;
            }
            else {
                cout << "Opción inválida." << endl;
            }
        }

        cout << "\n--- Resultado del participante " << i + 1 << " ---" << endl;
        if (porcentajeBalsa[i] >= 100 && kgAlimentos[i] >= ALIMENTO_MINIMO) {
            cout << "✔ Clasificado a la siguiente etapa!" << endl;
            Clasificados[i] = true;
            ExcedenteAlimento[i] = kgAlimentos[i] - ALIMENTO_MINIMO;
        } else {
            cout << "Descalificado. No cumplió los requisitos." << endl;
            Clasificados[i] = false;
            ExcedenteAlimento[i] = 0;
        }
    }
    
}

