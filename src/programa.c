#include <stdio.h>

void entradaNombre(char *nombre, int longitud) {
    // Función para obtener el nombre de usuario
    printf("Introduce el nombre de usuario: ");
    fgets(nombre, longitud, stdin);
}

void salidaNombre(const char *nombre) {
    // Función para mostar el nombre de usuario
    printf("Hola %s.Este programa está hecho en el lenguaje de programación: C. \n", nombre);
}

int main() {
    char nombre[100];

    // Entrada
    entradaNombre(nombre, sizeof(nombre));
    // Salida
    salidaNombre(nombre);

    return 0;
}