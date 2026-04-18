#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    char opcion;
    int numeroSecreto, intento, intentos = 0, limite, maxIntentos;
    bool gano = false;

    cout << "Ingrese el nivel de Dificultad (F = Facil / N = Normal / D = Dificil): ";
    cin >> opcion;

    srand(time(0));

    switch (opcion){
    case 'F':
        numeroSecreto = rand() % 100 + 1;
        limite = 100;
        maxIntentos = 9999;
        cout << "Modo Facil: Muy easy pa mandale" << endl;
        break;
    case 'N':
        numeroSecreto = rand() % 500 + 1;
        limite = 500;
        maxIntentos = 10;
        cout << "Modo normal: 1 pista y tenes :" << maxIntentos << " intentos , suerte" << endl;
        break;
    case 'D':
        numeroSecreto = rand() % 1000 + 1;
        limite = 1000;
        maxIntentos = 5;
        cout << "Modo dificil: sin pistas y tenes :" << maxIntentos <<" intentos ,suerte "<< endl;
        break;
    default:
        cout << "Opcion invalida" << endl;
        return 0;
    }

    cout << "Adivina el numero del 1 al " << limite << endl;

    do{
        cout << "Ingrese su intento: ";
        cin >> intento;
        intentos++;


        if (intento == numeroSecreto){
            cout << "Ganaste , felicitaciones" << endl;
            gano = true;
            break;
        }
        else{
            cout << "Incorrecto" << endl;
        }
        
        if (opcion == 'F' && intentos % 5 == 0 && !gano){
            int contPrimos = 0;

            for (int i = 1; i <= numeroSecreto; i++){
                if (numeroSecreto % i == 0){
                    contPrimos++;
                }
            }

            if (contPrimos == 2){
                cout << "El numero en el que estoy pensando es primo " << endl;
            }
            else{
                cout << "El numero en el que estoy pensando no es primo " << endl; 
            }
        }
 
        if (opcion == 'F' && intentos % 10 == 0 && !gano){
            if (intento < numeroSecreto){
                cout << "El numero en el que estoy pensando es mayor" << endl;
            }
            else{
                cout << "El numero en el que estoy pensando es menor" << endl;
            }
            
        }
        
        if (opcion == 'N' && intentos == 5 && !gano){
            if (numeroSecreto % 2 == 0){
                cout << "El numero en el que estoy pensando es par" << endl;
            }
            else{
                cout << "El numero en el que estoy pensando es impar" << endl;
            }
        }
        
        
    } while (!gano && intentos < maxIntentos);

    if (!gano){
        cout << "Perdiste el numero en el que estaba pensando era:  " << numeroSecreto << endl;
    }

    return 0;
}