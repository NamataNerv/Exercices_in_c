#include <stdio.h>

int main() {
    int c; // Se utiliza int en lugar de char para poder manejar EOF correctamente

    printf("Introduce un texto (presiona Ctrl+D o Ctrl+Z para terminar):\n");

    // Leer caracteres hasta encontrar el fin de la entrada (EOF)
    while ((c = getchar()) != EOF) {
        putchar(c); // Imprime el carácter leído
    }

    return 0;
}

