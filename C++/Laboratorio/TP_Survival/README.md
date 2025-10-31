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

## 🧩 Estructura del proyecto

    TP_Survival/
    ├── main.cpp          # Archivo principal que arranca el juego
    ├── funciones.cpp     # Contiene todas las funciones del juego
    ├── funciones.h       # Declaraciones de funciones
    ├── Makefile          # Para compilar y ejecutar fácilmente
    └── README.md         # Documentación del proyecto

## ⚙️ Cómo compilar y ejecutar

En Mac/Linux (sin Makefile)
1. Abrir la terminal y moverse a la carpeta del proyecto:
    cd TP_Survival
2. Compilar el programa:
    g++ main.cpp funciones.cpp -o TP_Survival
3. Ejecutar el juego:
    ./TP_Survival

Usando el Makefile
1. Compilar el proyecto:
    make
2. Compilar y ejecutar el juego:
    make run
3. Limpiar el proyecto (eliminar el ejecutable):
        make clean  

## 📋 Avances de TP_Survival

- [x] Crear la lógica básica del juego (menú, días, recolección de alimentos y materiales)  
- [x] Implementar sistema de puntajes: total de alimentos y porcentaje de refugio  
- [x] Mostrar resultados finales al terminar los 7 días  
- [x] Probar el juego en consola y ajustar cantidades aleatorias  
- [x] Documentar la estructura del proyecto en README  
- [x] Modularizar el código separando funciones en `funciones.cpp` y `funciones.h`  
- [x] Integrar las funciones con `main.cpp` y mantener el flujo del juego  
- [x] Crear Makefile para compilar y ejecutar fácilmente  
- [x] Verificar que todo funcione correctamente en Mac/Linux  
- [x] Preparar el proyecto para subir a GitHub  


