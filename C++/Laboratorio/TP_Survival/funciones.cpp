#include <iostream>
#include <cstdlib>
#include "funciones.h"
using namespace std;


#include <iostream>
using namespace std;

void mostrarIntro() {
    cout << "======================================================" << endl;
    cout << "       BIENVENIDO AL CONCURSO DE SUPERVIVENCIA       " << endl;
    cout << "======================================================" << endl;

    cout << "        &&& &&  & &&" << endl;
    cout << "     && &\\/&\\|& ()|/ @, &&" << endl;
    cout << "     &\\/(/&/&||/& /_/)_&/_&" << endl;
    cout << "  &() &\\/&|()|/&\\/ '%\" & ()" << endl;
    cout << " &_\\_&&_\\ |& |&&/&__%_/_& &&" << endl;
    cout << "&&   && & &| &| /& & % ()& /&&" << endl;
    cout << " ()&_---()&\\&\\|&&-&&--%---()~" << endl;
    cout << "     &&     \\|||" << endl;
    cout << "             |||      /\\ " << endl;
    cout << "             |||     /  \\ " << endl;
    cout << "             |||    /____\\ " << endl;
    cout << "             |||    |  __| " << endl;
    cout << "             |||    | |  | " << endl;
    cout << "             |||    | |__| " << endl;
    cout << "             |||    |_____| " << endl;
    cout << "        ~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "\nPrepárate para recolectar alimentos, construir refugios\n";
    cout << "y sobrevivir 7 días en la selva tropical!\n";
    cout << "======================================================\n\n";

    cout << "Presiona Enter para continuar...";
    cin.ignore();
    cin.get();
}


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
    int tiempoRefugio[PARTICIPANTES] = {0};
    int eleccion;

    //Etapa 2
    float alimentosEtapa2[PARTICIPANTES] = {0};
    int tiempoConstruccion[PARTICIPANTES] = {0};

    for (int i = 0; i < PARTICIPANTES; i++) {
        int diasRefugio = 0;
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
                diasRefugio++;
            } else {
                cout << "Opción inválida. Día perdido." << endl;
            }
        }

        tiempoRefugio[i] = diasRefugio;

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

    // Mostrar datos =================================================================================

    // mostrarResultados(kgAlimentos, tiempoRefugio, PARTICIPANTES, clasificado, "Refugio");

    // Mostrar tabla ordenada de la Etapa 1
    mostrarResultadosEtapa1(kgAlimentos, tiempoRefugio, clasificado, PARTICIPANTES);

    if (!hayAlgunClasificado(clasificado,PARTICIPANTES)){
        cout << "\nNingún participante clasificó a la siguiente etapa. Fin del juego.\n";
        return;
    }
    
    cout << "\nPresiona Enter para continuar a la Etapa 2..." << endl;
    cin.ignore();
    cin.get();
    
    // Etapa 2
    Construir_Balsa(kgAlimentos, clasificado, alimentosEtapa2, tiempoConstruccion);
    
    if (!hayAlgunClasificado(clasificado,PARTICIPANTES)){
        cout << "\nNingún participante clasificó a la siguiente etapa. Fin del juego.\n";
        return;
    }

    // Etapa 3
    RutaFinal(clasificado,PARTICIPANTES);
}

// Etapa 1 - Procesamientos de resultados =======================================================================================


// Nueva funcion para verificar clasificados
bool hayAlgunClasificado(bool clasificados[], int participantes) {
    for (int i = 0; i < participantes; i++) {
        if (clasificados[i]) {
            return true;  
        }
    }
    return false; 
}


// Nueva funcion para mostrar tabla 
void mostrarResultadosEtapa1(float kgAlimentos[], int tiempoRefugio[], bool clasificados[], int participantes) {
    cout << "\n==== RESULTADOS ETAPA 1 - REFUGIO ====" << endl;
    cout << "Puesto  Participante  Tiempo(días)  Alimentos(kg)" << endl;

    bool usados[100] = {0}; 
    int puesto = 1;

    // Mostrar clasificados ordenados
    for (int p = 0; p < participantes; p++) {
        int indiceMin = -1;
        int minTiempo = 9999;
        float maxAlimentos = -1;

        for (int i = 0; i < participantes; i++) {
            if (clasificados[i] && !usados[i]) {
                if (tiempoRefugio[i] < minTiempo) {
                    minTiempo = tiempoRefugio[i];
                    maxAlimentos = kgAlimentos[i];
                    indiceMin = i;
                } else if (tiempoRefugio[i] == minTiempo && kgAlimentos[i] > maxAlimentos) {
                    maxAlimentos = kgAlimentos[i];
                    indiceMin = i;
                }
            }
        }

        if (indiceMin == -1) break; 
        usados[indiceMin] = true;

        cout << puesto << "        "
             << "Participante " << indiceMin + 1 << "      "
             << tiempoRefugio[indiceMin] << "             "
             << kgAlimentos[indiceMin] << endl;

        puesto++;
    }

    // Mostrar descalificados al final
    cout << "\n--- Descalificados ---" << endl;
    for (int i = 0; i < participantes; i++) {
        if (!clasificados[i]) {
            cout << "Participante " << i + 1
                 << "   Tiempo: -"
                 << "   Alimentos: " << kgAlimentos[i] << endl;
        }
    }

    cout << "===============================" << endl;
}



float promedioAlimentos(float kgAlimentos[], int participantes){
    float suma = 0;
    for (int i = 0; i < participantes; i++){
        suma += kgAlimentos[i];
    }
    return suma / participantes;
}
void mostrarSuperaronPromedio(float KgAlimentos[] , int participantes){
    float promedio = promedioAlimentos(KgAlimentos,participantes);
    cout << "\nPromedio de alimentos recolectados: " << promedio << " kg\n";
    cout << "Participantes que superaron el promedio:\n";
    for (int i = 0; i < participantes; i++){
        if (KgAlimentos[i] > promedio){
            cout << "Participante " << i + 1 << ": " << KgAlimentos[i] << " kg\n";
        }
    }
}

void MasRapidoConstruccion(int TiempoRefugio[], int participantes){
    int minTiempo = 9999;
    int ganador = -1;
    for (int i = 0; i < participantes; i++){
        if (TiempoRefugio[i] < minTiempo){
            minTiempo = TiempoRefugio[i];
            ganador = i;
        }
    }
    cout << "\nParticipante más rápido en construir el refugio: " << ganador + 1 << " en " << minTiempo << " días.\n";
}

// void Mas5Dias(int TiempoRefugio[] , int participantes){
//     const int DIAS = 5;
//     int contador = 0;
//     for (int i = 0; i < participantes; i++){
//         if (TiempoRefugio[i] > DIAS){
//             contador ++;
//         }
//     }
//     cout << "Participantes que tardaron mas de 5 dias: " << contador << endl;
// }

// void mostrarResultados(float kgAlimentos[], int tiempoRefugio[], int participantes, bool clasificados[], string tipoConstruccion) {
//     cout << "\n===============================" << endl;
//     cout << " RESULTADOS: " << tipoConstruccion << endl;
//     cout << "===============================" << endl;

//     if (tipoConstruccion == "Refugio") {
//         mostrarSuperaronPromedio(kgAlimentos, participantes);
//         MasRapidoConstruccion(tiempoRefugio, participantes);
//         Mas5Dias(tiempoRefugio, participantes);
//     } else if (tipoConstruccion == "Balsa" || tipoConstruccion == "balsa") {
//         mostrarSuperaronPromedioEtapa2(kgAlimentos, clasificados, participantes);
//         mostrarMasRapidoEnConstruir(tiempoRefugio, clasificados, participantes);
//     }
// }



// ============================================================================================================================

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
            recolectado = generarRandom(3,8);
            break;
        case 2:
            recolectado = generarRandom(4,8);
            break;
        case 3:
            recolectado = generarRandom(5,14);
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
            recolectado = generarRandom(7,15); 
            break;
        case 2: 
            recolectado = generarRandom(9,20); 
            break;
        case 3: 
            recolectado = generarRandom(10,30);
            break;
        case 4: 
            recolectado = generarRandom(1,40);
            break;
        default:
            cout << "Opción inválida." << endl;
            recolectado = 0;
            break;
    }

    cout << "Recolectaste " << recolectado << "% de materiales." << endl;
    cout << "Progreso del refugio: " << porcentajeRefugio + recolectado << "%" << endl;
    cout << "Presiona Enter para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    return recolectado;
}

// Etapa 2: 

void Construir_Balsa(float ExcedenteAlimento[], bool Clasificados[],float alimentosEtapa2[], int tiempoConstruccion[]) {
    const int PARTICIPANTES = 8;
    const int DIAS = 6;
    const float ALIMENTO_MINIMO = 14.0;

    float porcentajeBalsa[PARTICIPANTES] = {0};
    int eleccion, material;

    srand(time(NULL));

    for (int i = 0; i < PARTICIPANTES; i++) {
        if (!Clasificados[i]) continue; // salta los descalificados

        cout << "\n===== Etapa 2 - Participante " << i + 1 << " =====" << endl;

        float kgAlimentos = ExcedenteAlimento[i];
        int tiempoBalsa = 0;

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
                float recolectado = generarRandom(2, 6);
                kgAlimentos += recolectado;
                cout << "Recolectó " << recolectado << " kg de alimentos. Total: " << kgAlimentos << " kg" << endl;
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
                        avance = generarRandom(20, 35); 
                        break;
                    case 2: 
                        avance = generarRandom(10, 20); 
                        break;
                    case 3: 
                        avance = generarRandom(15, 25); 
                        break;
                    default:
                        cout << "Opción inválida. Se pierde el día." << endl;
                        continue;
                }

                porcentajeBalsa[i] += avance;
                if (porcentajeBalsa[i] > 100) porcentajeBalsa[i] = 100;
                tiempoBalsa++;

                cout << "Avance en la construcción: " << porcentajeBalsa[i] << "%" << endl;
            }
            else {
                cout << "Opción inválida." << endl;
            }
        }

        // Guardar los resultados de cada participante
        alimentosEtapa2[i] = kgAlimentos;
        tiempoConstruccion[i] = tiempoBalsa;

        cout << "\n--- Resultado del participante " << i + 1 << " ---" << endl;
        if (porcentajeBalsa[i] >= 100 && kgAlimentos >= ALIMENTO_MINIMO) {
            cout << "Clasificado a la siguiente etapa!" << endl;
            Clasificados[i] = true;
            ExcedenteAlimento[i] = kgAlimentos - ALIMENTO_MINIMO;
        } else {
            cout << "Descalificado. No cumplió los requisitos." << endl;
            Clasificados[i] = false;
            ExcedenteAlimento[i] = 0;
        }
    }

    
    cout << "\n=== RESULTADOS GENERALES ETAPA 2 ===" << endl;

}

// Etapa 2 - Procesamiento de datos ==============================================================

float promedioAlimentosEtapa2(float kgAlimentos[], bool clasificados[], int participantes) {
    float suma = 0;
    int contador = 0;

    for (int i = 0; i < participantes; i++) {
        if (clasificados[i]) {   
            suma += kgAlimentos[i];
            contador++;
        }
    }
    if (contador == 0) return 0;
    return suma / contador;
}

void mostrarSuperaronPromedioEtapa2(float kgAlimentos[], bool clasificados[], int participantes) {
    float promedio = promedioAlimentosEtapa2(kgAlimentos, clasificados, participantes);
    cout << "\nPromedio de alimentos recolectados: " << promedio << " kg\n";
    cout << "Participantes que superaron el promedio:\n";

    for (int i = 0; i < participantes; i++) {
        if (clasificados[i] && kgAlimentos[i] > promedio) {
            cout << "Participante " << i + 1 << ": " << kgAlimentos[i] << " kg\n";
        }
    }
}


void mostrarMasRapidoEnConstruir(int tiempoConstruccion[], bool clasificados[], int participantes) {
    int minTiempo = 9999;
    int participanteMasRapido = -1;

    for (int i = 0; i < participantes; i++) {
        if (clasificados[i] && tiempoConstruccion[i] > 0 && tiempoConstruccion[i] < minTiempo) {
            minTiempo = tiempoConstruccion[i];
            participanteMasRapido = i;
        }
    }

    cout << "\n=== Participante más rápido en construir la balsa ===" << endl;

    if (participanteMasRapido != -1) {
        cout << "Participante " << participanteMasRapido + 1 << " fue el más rápido, con " << minTiempo << " días." << endl;
    } else {
        cout << "Ningún participante completó la balsa." << endl;
    }
}


//etapa 3

float simularVelocidad() {
    
    return 1 + rand() % 5;
}

void RutaFinal(bool clasificados[] , int cantidad){

    const int HORAS = 24;
    const int KILOMETRAJE = 18; // Esto son kilometros

    float Tiempos[cantidad];
    bool Llego[cantidad];
    float velocidad, tiempo;

    srand(time(0));

    cout << "================================================================\n";
    cout << "================== ETAPA 3 - FLUVIAL ===========================\n";
    cout << "================================================================\n";

    cout << "Esta es la etapa final: cada participante debe navegar desde el refugio hasta el destino.\n";
    cout << "El tiempo máximo permitido es de 24 horas.\n\n";

    for (int i = 0; i < cantidad; i++){
        if (!clasificados[i]){
            Llego[i] = false;
            Tiempos[i] = 0;
            continue;
        }
        
        cout << "\nParticipante " << i + 1 << ", elija un camino:\n";
        cout << "1) Camino del Río Calmo\n";
        cout << "2) Camino del Medio\n";
        cout << "3) Camino del Remolino\n";
        cout << "Seleccione (1-3): ";

        int opcion;
        cin >> opcion;

        float VelocidadBase = simularVelocidad();
        float VelocidadFinal;

        switch (opcion){
        case 1:
            cout << "Usted a elegido el camino del Rio Calmo" << endl;
            VelocidadFinal = VelocidadBase * 1.20;
            break;
        case 2:
            cout << "Usted a elegido el camino del Medio" << endl;
            VelocidadFinal = VelocidadBase * 1.00;
        case 3:
            cout << "Usted a elegido el Camino del Remolino" << endl;
            VelocidadFinal = VelocidadBase * 0.8;
        default:
            cout << "Opción inválida. Se asigna Camino del Medio." << endl;
            VelocidadFinal = VelocidadBase;
            break;
        }

        tiempo = KILOMETRAJE / VelocidadFinal;
        Tiempos[i]= tiempo;

        if (tiempo <= HORAS){
            Llego[i] = true;
            cout << "→ Llegó en " << tiempo << " horas.\n";
        }
        else{
            Llego[i] = false;
            clasificados[i] = false;
            cout << "→ NO llegó a tiempo. Queda descalificado.\n";
        }
        
    }
    float tiempoMin;
    int indiceMasRapido = participanteMasRapido(Tiempos,Llego,cantidad,tiempoMin);
    mostrarResultadosOrdenados(Tiempos, Llego, cantidad);


    
}

int participanteMasRapido(float tiempos[], bool llego[], int cantidad, float &tiempoMin) {
    tiempoMin = 999999;  
    int indice = -1;

    for (int i = 0; i < cantidad; i++) {
        if (llego[i] && tiempos[i] < tiempoMin) {
            tiempoMin = tiempos[i];
            indice = i;
        }
    }

    return indice;
}

void mostrarResultadosOrdenados(float tiempos[], bool llego[], int cantidad) {

    int usado[100];
    int orden[100];
    float tiemposOrdenados[100];

    for (int i = 0; i < cantidad; i++) {
        usado[i] = 0;
        tiemposOrdenados[i] = -1;
    }

    
    for (int pos = 0; pos < cantidad; pos++) {

        float minimo = 999999;
        int indiceMin = -1;

        for (int i = 0; i < cantidad; i++) {
            if (llego[i] == true && usado[i] == 0) {
                if (tiempos[i] < minimo) {
                    minimo = tiempos[i];
                    indiceMin = i;
                }
            }
        }

        if (indiceMin == -1) {
            break; 
        }

        usado[indiceMin] = 1;
        orden[pos] = indiceMin;
        tiemposOrdenados[pos] = tiempos[indiceMin];
    }

    // Mostrar resultados
    cout << "\n==== CLASIFICACIÓN ORDENADA ====\n";
    cout << "Puesto  Participante  Tiempo\n";

    int puesto = 1;

    for (int i = 0; i < cantidad; i++) {

        if (tiemposOrdenados[i] == -1) {
            break; 
        }

        cout << puesto << "        "
             << orden[i] + 1 << "            "
             << tiemposOrdenados[i] << " horas\n";

        puesto++;
    }

    cout << "===============================\n";
}
