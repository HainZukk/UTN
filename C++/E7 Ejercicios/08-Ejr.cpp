// Dada una lista de números compuesta por 10 subgrupos y cada grupo separado del siguiente por un cero, se pide generar un vector de 10 elementos con el máximo de cada uno de los subgrupos. Luego mostrar los elementos del vector por pantalla.

#include <iostream> 
using namespace std;
int main(){

    const int n = 50;
    int lista[n] = {
        3, 5, 2, 0,            
        7, 1, 9, 6, 0,         
        4, 2, 8, 1, 0,         
        10, 3, 0,              
        4, 4, 4, 0,            
        6, 0,                  
        15, 20, 0,             
        3, 2, 5, 0,            
        1, 0,                  
        9, 11, 13, 0           
    };

    int maximos[10];
    int indiceGrupo = 0;
    int maxActual = -99999;

    for (int i = 0; i < n; i++){
        if (lista[i] == 0){
            maximos[indiceGrupo] = maxActual;
            indiceGrupo ++;
            maxActual = -99999;
        }
        else{
            if (lista[i] > maxActual){
                maxActual = lista[i];
            }   
        }
    }
    cout << "Maximos de cada subgrupo:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Grupo " << i + 1 << ": " << maximos[i] << endl;
    }


    return 0;
}
