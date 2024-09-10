#include <stdio.h>

void procedure_1() {
    int c, caracteres = 0, palabras = 0, lineas = 0;
    int en_palabra = 0;  // Para detectar si estamos dentro de una palabra

    printf("Ingresa texto (El programa terminará cuando escribas CTRL+D (^D) y luego presiones ENTER): \n");

    while ((c = getchar()) != EOF) {
        caracteres++;

        // Contamos líneas cuando encontramos un salto de línea
        if (c == '\n') {
            lineas++;
        }

        // Detectamos si estamos en una palabra
        if (c == ' ' || c == '\n' || c == '\t') {
            en_palabra = 0;  // Ya no estamos en una palabra
        } else if (!en_palabra) {
            en_palabra = 1;  // Encontramos el inicio de una nueva palabra
            palabras++;
        }
    }

    printf("Resultados:\n");
    printf("Caracteres: %d\n", caracteres);
    printf("Palabras: %d\n", palabras);
    printf("Líneas: %d\n", lineas);
}

int main() {
    int z='\n';

    printf("Inicio de procedimiento 01 %d\n",z);
    
    procedure_1();

    return 0;
}

/*
### **Correcciones clave:**
1. **Detección de palabras**: 
    Ahora el programa detecta palabras contando cada transición de un carácter que no es un espacio a uno que lo es.
2. **Suma de líneas**: 
    Cada vez que encuentra un salto de línea (`'\n'`), cuenta correctamente la línea.
3. **Manejo de EOF**: 
    Cuando se ingresa `CTRL+D`, el programa termina correctamente.

*/