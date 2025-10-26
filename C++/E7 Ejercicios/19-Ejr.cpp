#include <iostream>
using namespace std;

void CargarVectores(int v[], int v2[], int tam) {
    cout << "Ingrese los " << tam << " numeros del primer vector: " << endl;
    for (int i = 0; i < tam; i++) {
        cin >> v[i];
    }

    cout << "Ingrese los " << tam << " numeros del segundo vector: " << endl;
    for (int i = 0; i < tam; i++) {
        cin >> v2[i];
    }
}

int VectorComun(int v[], int v2[], int v3[], int tam) {
    int k = 0;

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (v[i] == v2[j]) {
                bool repetido = false;
                for (int x = 0; x < k; x++) {
                    if (v3[x] == v[i]) {
                        repetido = true;
                        break;
                    }
                }
                if (!repetido) {
                    v3[k] = v[i];
                    k++;
                }
            }
        }
    }

    return k;
}

void MostrarVectores(int v[], int tam) {
    cout << "[ ";
    for (int i = 0; i < tam; i++) {
        cout << v[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    const int N = 10;
    int vec[N], vec2[N], vec3[N];

    CargarVectores(vec, vec2, N);

    int cant = VectorComun(vec, vec2, vec3, N);

    cout << "\nVector 1: ";
    MostrarVectores(vec, N);

    cout << "Vector 2: ";
    MostrarVectores(vec2, N);

    cout << "Vector 3 (elementos comunes): ";
    MostrarVectores(vec3, cant);

    return 0;
}
