#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    // Constante entera para no tener que modificar directamente en el ciclo for.
    const int DIAS = 7;
    int n , eleccion, TipoCosecha, TipoMaterial;
    float kgAlimentos = 0 , porcentajeRefugio = 0;
    float AlimentosRecolectados = 0 , MaterialesRecolectados = 0;

    int opcion = 1; // para el while

    while(opcion != 2){ 
        cout << "======================================================" << endl;
        cout << "Bienvenido/a al concurso de supervivencia" << endl;
        cout << "1. Juego nuevo" << endl;
        cout << "2. Salir" << endl;
        cout << "======================================================" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                system("clear");
                cout << "Ha comenzado un nuevo juego" << endl;
                cout << "Tiene 7 dias para recolectar" << endl;

                for (int i = 1; i <= DIAS; i++){
                    cout << "\nDia: "<< i << endl;
                    cout << "1. Recolectar Alimentos"<<endl;
                    cout << "2. Recolectar Materiales"<<endl;
                    cin >> eleccion;

                    if (eleccion == 1){
                        cout << "Ha elegido recolectar alimentos" << endl;
                        cout << "1- Pesca en el rio "<<endl;
                        cout << "2- Cosecha en arbustos"<<endl;
                        cout << "3- Cosecha en arboles"<<endl;
                        cin >> TipoCosecha;

                        switch (TipoCosecha)
                        {
                            case 1:
                                AlimentosRecolectados = 2 + rand() % 10; // 2 a 11 kg
                                cout << "Recolectaste " << AlimentosRecolectados << " kg de alimentos de pesca." << endl;
                                break;
                            case 2:
                                AlimentosRecolectados = 1 + rand() % 8; // 1 a 8 kg
                                cout << "Recolectaste " << AlimentosRecolectados << " kg de alimentos de arbustos." << endl;
                                break;
                            case 3:
                                AlimentosRecolectados = 3 + rand() % 12; // 3 a 14 kg
                                cout << "Recolectaste " << AlimentosRecolectados << " kg de alimentos de arboles." << endl;
                                break;
                            default:
                                cout << "Opcion de cosecha invalida." << endl;
                                AlimentosRecolectados = 0;
                                break;
                        }
                        kgAlimentos += AlimentosRecolectados;

                    } else if (eleccion == 2){
                        cout << "Ha elegido recolectar materiales" << endl;

                        if(porcentajeRefugio < 100){ // Validación 100% del refugio
                            cout << "1- Ramas de arboles "<<endl;
                            cout << "2- Ramas de arbustos"<<endl;
                            cout << "3- Barro"<<endl;
                            cout << "4- Rocas"<<endl;
                            cin >> TipoMaterial;

                            switch (TipoMaterial){
                                case 1:
                                    MaterialesRecolectados = 5 + rand() % 15; // 5 a 19
                                    break;
                                case 2:
                                    MaterialesRecolectados = 1 + rand() % 12; // 1 a 12
                                    break;
                                case 3:
                                    MaterialesRecolectados = 1 + rand() % 20; // 1 a 20
                                    break;
                                case 4:
                                    MaterialesRecolectados = 1 + rand() % 30; // 1 a 30
                                    break;
                                default:
                                    cout << "Opcion de material invalida." << endl;
                                    MaterialesRecolectados = 0;
                                    break;
                            }
                            porcentajeRefugio += MaterialesRecolectados;
                            if(porcentajeRefugio > 100){
                                porcentajeRefugio = 100;
                            }
                            cout << "Porcentaje de refugio construido: " << porcentajeRefugio << "%" << endl;
                            system("read -n 1 -s -p \"Presiona cualquier tecla para continuar\"");
                        } else {
                            cout << "Tu refugio ya está completo! No necesitas recolectar más materiales." << endl;
                        }

                    } 
                    else {
                        cout << "No ha elegido una opcion valida" << endl;
                    }
                }
                // Resultados finales
                cout << "\n--- RESULTADOS FINALES ---" << endl;
                cout << "Total de alimentos recolectados: " << kgAlimentos << " kg" << endl;
                cout << "Promedio diario de alimentos: " << kgAlimentos / DIAS << " kg" << endl;
                cout << "Porcentaje de refugio construido: " << porcentajeRefugio << "%" << endl;
                cout << "Promedio diario de materiales: " << porcentajeRefugio / DIAS << "%" << endl;
                break;

            case 2:
                cout << "Saliendo del juego..." << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    }

    return 0;
}
