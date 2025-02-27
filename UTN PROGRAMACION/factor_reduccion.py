def calcular_factor_reduccion(porcentaje_reduccion):
    return 1 - (porcentaje_reduccion / 100)

# Ejemplo de uso
porcentaje = 70  # Reducción del 18%
factor = calcular_factor_reduccion(porcentaje)
print(f"El factor de reducción para una reducción del {porcentaje}% es: {factor}")
