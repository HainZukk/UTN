#include <iostream>
#include <string>
using namespace std;



int mayorGasto(float totalPorCategoria[],int MAX_CAT){

    int mayorIndice = 0;
    for (int i = 0; i < MAX_CAT; i++){
        if (totalPorCategoria[i] > totalPorCategoria[mayorIndice]){
            mayorIndice = i;
        }
    }
    return mayorIndice;
}

void mostrarPorCategoria(float totalPorCategoria[],string nombresCategorias[],int MAX_CAT){
    for (int i = 0; i < MAX_CAT; i++){
        cout << nombresCategorias[i] << ":  $" << totalPorCategoria[i] << endl;
    }
}

// Categorias sin movimientos
int catSinMovimientos(float totalPorCategoria[],int MAX_CAT){
    int contadorSinMov = 0;

    for (int i = 0; i < MAX_CAT; i++){
        if (totalPorCategoria[i] == 0){
            contadorSinMov++;
        }
    }
    return contadorSinMov;
}

void gastoPorDia(int cantidadPorDia[],int MAX_DIAS){
    cout << "Gastos por dia: \n";
    for (int i = 0; i < MAX_DIAS; i++){
        if (cantidadPorDia[i] > 0){
            cout << "Dia " << i + 1 << ": " << cantidadPorDia[i] << " gasto(s)" << endl;
        }
    }
}


int main(){

    const int MAX_CAT = 10;
    const int MAX_DIAS = 31;
    int dia , categoria;
    float importe;



    string nombresCategorias[MAX_CAT] = {
        "Servicios", "Alimentacion", "Limpieza", "Transporte", "Educacion",
        "Salud", "Ocio", "Impuestos", "Vestimenta", "Inversiones"
    };

    float totalPorCategoria[MAX_CAT] = {0};
    int cantidadPorDia[MAX_DIAS] = {0};

    do {
        cout << "Ingrese el dia (0 para finalizar): ";
        cin >> dia;
            if (dia < 0 || dia > MAX_DIAS){
                cout << "Ingrese un dia valido (0 para finalizar)" << endl;
            }
    } while (dia < 0 || dia > MAX_DIAS);

    while (dia != 0){
        do {
            cout << "Ingrese la categoria (1-10): ";
            cin >> categoria;

            if (categoria < 1 || categoria > 10){
                cout << "Ingrese una categoria en el rango anunciado" << endl;
            }
            
        } while (categoria < 1 || categoria > 10);

        cout << "Ingrese el importe del dia: " << endl;
        cin >> importe;

        totalPorCategoria[categoria-1] += importe; // por ejemplo si la categoria es 1 el indice es 0
        cantidadPorDia[dia-1]++;


        do {
            cout << "Ingrese el dia (0 para finalizar): ";
            cin >> dia;
                if (dia < 0 || dia > MAX_DIAS){
                    cout << "Ingrese un dia valido (0 para finalizar)" << endl;
                }
        } while (dia < 0 || dia > MAX_DIAS);
    }

    /*
    A) La categoría de gasto que mayor dinero se haya destinado y cuál es dicha categoría.
    */

    int indiceMayor = mayorGasto(totalPorCategoria,MAX_CAT);
    cout << "\n--- A) Categoria con mayor gasto ---\n";
    cout << nombresCategorias[indiceMayor] << ": $" << totalPorCategoria[indiceMayor] << endl; 

    /*
    B) Total por categoria
    */
    cout << "\n--- B) Total por Categoria ---\n";
    mostrarPorCategoria(totalPorCategoria,nombresCategorias,MAX_CAT);


    // C
    cout << "\n--- C) Categorias sin Movimientos---\n";
    int sinMovimientos = catSinMovimientos(totalPorCategoria,MAX_CAT);
    cout << "Cantidad de categorias sin movimientos es: " << sinMovimientos << endl;

    // D Gastos por Dia
    cout << "\n--- D) Gastos por Dia ---\n";
    gastoPorDia(cantidadPorDia,MAX_DIAS);

    return 0;
}