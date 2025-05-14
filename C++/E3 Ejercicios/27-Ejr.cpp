#include <iostream>
using namespace std;

int main() {
    const int DIAS = 15;
    int dia, diaTempMax = 0, diasLluviosos = 0, diasNeblina = 0;
    float temperatura, lluvia, visibilidad;
    float tempMax = -1000, tempMin = 1000; 

    for (int i = 0; i < DIAS; i++) {
        cout << "Día " << i + 1 << ":\n";
        cout << "Temperatura: ";
        cin >> temperatura;
        cout << "Milímetros de lluvia: ";
        cin >> lluvia;
        cout << "Visibilidad (km): ";
        cin >> visibilidad;

        
        if (temperatura > tempMax) {
            tempMax = temperatura;
            diaTempMax = i + 1;
        }    
        if (temperatura < tempMin) {
            tempMin = temperatura;
        }
        if (lluvia > 0) {
            diasLluviosos++;
        }
        if (visibilidad < 2) {
            diasNeblina++;
        }

        cout << "------------------\n";
    }

    float amplitudTermica = tempMax - tempMin;

    
    cout << "\nResultados:\n";
    cout << "Día con temperatura máxima: " << diaTempMax << endl;
    cout << "Amplitud térmica: " << amplitudTermica << "°C\n";
    cout << "Cantidad de días con neblina: " << diasNeblina << endl;

    
    if (diasLluviosos > DIAS - diasLluviosos) {
        cout << "Quincena lluviosa\n";
    } else if (diasLluviosos >= DIAS / 3.0) {
        cout << "Quincena húmeda\n";
    } else {
        cout << "Quincena seca\n";
    }

    return 0;
}
