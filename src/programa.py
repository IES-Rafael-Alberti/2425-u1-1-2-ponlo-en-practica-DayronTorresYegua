def entradaNombre():
    """Función que obtiene el nombre de usuario"""
    return input("Introduce el nombre de usuario: ")

def salidaNombre(nombre):
    """Función para mostar el nombre de usuario y lenguaje usado"""
    print(f"Hola {nombre}. Este programa está hecho en el lenguaje de programación: Python.")

def main():
   
    # Entrada
    nombre = entradaNombre()
    # Salida
    salidaNombre(nombre)

if __name__ == '__main__':
    main()