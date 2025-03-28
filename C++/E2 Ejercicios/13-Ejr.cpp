#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    int codigo;

    cout << "Ingrese el primer número: ";
    cin >> n1;
    cout << "Ingrese el segundo número: ";
    cin >> n2;
    cout << "Ingrese el tercer número: ";
    cin >> n3;

    if (n1 <= n2 && n2 <= n3) codigo = 1;
    else if (n1 <= n3 && n3 <= n2) codigo = 2;
    else if (n2 <= n1 && n1 <= n3) codigo = 3;
    else if (n2 <= n3 && n3 <= n1) codigo = 4;
    else if (n3 <= n1 && n1 <= n2) codigo = 5;
    else if (n3 <= n2 && n2 <= n1) codigo = 6;

    switch (codigo) {
        case 1:
            cout << n1 << ", " << n2 << ", " << n3 << endl;
            break;
        case 2:
            cout << n1 << ", " << n3 << ", " << n2 << endl;
            break;
        case 3:
            cout << n2 << ", " << n1 << ", " << n3 << endl;
            break;
        case 4:
            cout << n2 << ", " << n3 << ", " << n1 << endl;
            break;
        case 5:
            cout << n3 << ", " << n1 << ", " << n2 << endl;
            break;
        case 6:
            cout << n3 << ", " << n2 << ", " << n1 << endl;
            break;
        default:
            cout << "Error en la entrada de números." << endl;
            break;
    }

    return 0;
}
