#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    bool alternados = true;

    cout << "Ingrese 10 números enteros:" << endl;
    
    
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < 9; i++) {  
        
        if ((numeros[i] % 2 == 0 && numeros[i + 1] % 2 == 0) || (numeros[i] % 2 != 0 && numeros[i + 1] % 2 != 0)) {
            alternados = false;
            break;  
        }
    }

    if (alternados) {
        cout << "Alternados" << endl;
    } else {
        cout << "No Alternados" << endl;
    }

    return 0;
}
