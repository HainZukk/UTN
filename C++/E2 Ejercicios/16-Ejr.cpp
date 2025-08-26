/*
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones: 
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más. 
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes. 
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes. 
- “Recursa la materia”, si no aprobó ningún examen parcial.
*/


#include <iostream>
using namespace std;
int main (){

    int n1,n2,n3,n4;
    int notas[4];
    int aprobados = 0;

    cout << "Ingrese la primera nota: ";
    cin >> n1;

    cout << "Ingrese la segunda nota: ";
    cin >> n2;

    cout << "Ingrese la tercera nota: ";
    cin >> n3;

    cout << "Ingrese la cuarta nota: ";
    cin >> n4;

    notas[0] = n1;
    notas[1] = n2;
    notas[2] = n3;
    notas[3] = n4;

    for (int i = 0; i < 4; i++){
        if (notas[i] >= 4){
            aprobados ++;
        }
    }
    
    if (n1 >= 7 && n2 >= 7 && n3 >= 7 && n4 >= 7){
        cout << "Promociona la materia" << endl;
    }
    else if (aprobados >= 3)
    {
        cout << "Rinde examen" << endl;
    }

    else if (aprobados >= 1)
    {
        cout << "Recupera parciales" << endl;
    }
    else{
        cout << "Recursa la materia" << endl;
    }
    
    return 0;
}
