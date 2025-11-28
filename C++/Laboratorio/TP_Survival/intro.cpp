#include <iostream>
#include "utils/rlutil.h"
#include "funciones.h" 
using namespace std;
using namespace rlutil;

void mostrarIntro() {
    const int WIDTH = 202;
    const int HEIGHT = 53;
    int centerX = WIDTH / 2;
    int centerY = HEIGHT / 2;

    cls(); 

    // Título
    setColor(LIGHTCYAN);
    locate(centerX - 30, centerY - 15); cout << "==============================================================";
    locate(centerX - 30, centerY - 14); cout << "||                     BIENVENIDO AL                        ||";
    locate(centerX - 30, centerY - 13); cout << "||                   CONCURSO DE SUPERVIVENCIA             ||";
    locate(centerX - 30, centerY - 12); cout << "==============================================================";

    // Barco
    setColor(LIGHTCYAN);
    locate(centerX - 20, centerY - 7);  cout << "           |    |    |";
    locate(centerX - 20, centerY - 6);  cout << "          )_)  )_)  )_)";
    locate(centerX - 20, centerY - 5);  cout << "         )___))___))___)\\";
    locate(centerX - 20, centerY - 4);  cout << "        )____)____)_____)\\\\";
    locate(centerX - 20, centerY - 3);  cout << "      _____|____|____|____\\\\\\__";
    locate(centerX - 20, centerY - 2);  cout << "------\\                   /---------";
    locate(centerX - 20, centerY - 1);  cout << "  ^^^^^ ^^^^^^^^^^^^^^^^^^^^^";
    locate(centerX - 20, centerY);      cout << "    ^^^^      ^^^^      ^^^";

    // Mensaje
    setColor(WHITE);
    locate(centerX - 40, centerY + 3); cout << "Prepárate para navegar, recolectar recursos y sobrevivir";
    locate(centerX - 40, centerY + 4); cout << "Desafiando tus capacidades en cada etapa!";

    // Presiona ENTER
    setColor(YELLOW);
    locate(centerX - 15, centerY + 7); cout << "Presiona ENTER para comenzar...";
    cin.ignore();
    cin.get();

    // Mensaje de carga
    locate(centerX - 12, centerY + 9); cout << "Cargando el juego ......";
    cout.flush();
    msleep(2000);

    cls();
}