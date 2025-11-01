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

### ETAPA 1: Construcción del Refugio y Recolección de Alimentos
En la primera etapa del juego, cada participante tiene 7 días para prepararse para la supervivencia. Cada día, el jugador debe elegir entre dos acciones principales:

1. **Recolectar alimentos**:  
   - Pesca en el río  
   - Cosecha en arbustos  
   - Cosecha en árboles  

2. **Recolectar materiales para el refugio**:  
   - Ramas de árboles o arbustos  
   - Barro  
   - Rocas  

**Objetivo:**  
- Recolectar al menos 14 kg de alimentos.  
- Construir el refugio hasta alcanzar el 100% de avance.  

**Resultados al final de la etapa:**  
- Total de alimentos recolectados.  
- Promedio diario de alimentos.  
- Porcentaje de refugio construido.  
- Estado del participante: **Clasificado** o **Descalificado** para la siguiente etapa.

---

### ETAPA 2: Construcción de la Balsa
Solo los participantes **clasificados en la Etapa 1** pueden participar en esta segunda etapa, que dura 6 días. Cada día, el jugador puede elegir entre:

1. **Recolectar alimentos**:  
   - Suma adicional de alimentos para el participante.  

2. **Construir la balsa**:  
   - Selección de materiales con distintos porcentajes de avance:  
     - Troncos de árboles (20–35%)  
     - Hojas de palmera (10–20%)  
     - Caña (15–25%)  

**Reglas especiales:**  
- Si la balsa alcanza el 100% de construcción antes de los 6 días, el jugador **solo puede recolectar alimentos** en los días restantes.  
- Se acumula el excedente de alimentos para la siguiente etapa (si existe).  

**Objetivo:**  
- Construir la balsa al 100%.  
- Mantener un mínimo de 14 kg de alimentos.  

**Resultados al final de la etapa:**  
- Porcentaje final de balsa construida.  
- Total de alimentos recolectados (incluyendo excedentes).  
- Estado del participante: **Clasificado** o **Descalificado**.


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

## 📋 Avances recientes (hoy)

- [x] Implementada la **Etapa 2 del juego**: construcción de la balsa con materiales seleccionables.  
- [x] Ajustadas las funciones para manejar solo a los **participantes clasificados**, respetando los requisitos de alimentos y refugio.  
- [x] Creada la función `mostrarResumen()` para mostrar un **resumen consolidado de las dos etapas**.  
- [x] Modificada la lógica de `Construir_Balsa()` para **uso de arreglos por referencia**, evitando errores de inicialización de arrays dinámicos.  
- [x] Probadas interacciones de usuario en consola para recolección de alimentos y construcción de balsa, con **cálculo de avance porcentual**.


