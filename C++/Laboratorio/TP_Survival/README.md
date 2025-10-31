# 🏹 TP_Survival

**Autor:** Tobias Nguyen  
**Lenguaje:** C++  
**Proyecto:** TP_Survival – Juego de supervivencia por consola  
**Fecha de inicio:** 2025-8-15  

---

## 📖 Descripción

TP_Survival es un juego de supervivencia por consola.  
El jugador tiene 7 días para recolectar alimentos y construir un refugio. Cada decisión diaria afecta los resultados finales, incluyendo la cantidad de alimentos recolectados y el progreso del refugio.  
El juego está diseñado de manera modular para facilitar la ampliación y el mantenimiento del código.

---

## 🎮 Cómo jugar

1. Ejecutar el programa:
   ```bash
   ./TP_Survival

2. Elegir la opción de Jugar en el menú principal.

3. Cada día puedes decidir entre:
    Recolectar alimentos: pesca, arbustos o árboles.
    Recolectar materiales: ramas, barro o rocas. 
4. Al final de los 7 días se muestran los resultados finales:
    Total de alimentos recolectados
    Promedio diario de alimentos
    Porcentaje de refugio construido

🧩 Estructura del proyecto

    TP_Survival/
    ├── main.cpp          # Archivo principal que arranca el juego
    ├── funciones.cpp     # Contiene todas las funciones del juego
    ├── funciones.h       # Declaraciones de funciones
    ├── Makefile          # Para compilar y ejecutar fácilmente
    └── README.md         # Documentación del proyecto

⚙️ Cómo compilar y ejecutar
En Mac/Linux:
    cd TP_Survival
    g++ main.cpp funciones.cpp -o TP_Survival
    ./TP_Survival

Con Makefile:
    make        # compila
    make run    # compila y ejecuta
    make clean  # borra el ejecutable

