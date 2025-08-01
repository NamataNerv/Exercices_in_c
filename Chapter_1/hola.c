#include <stdio.h>

#define TABSTOP 4  // Puedes cambiar este valor si deseas otro tamaño de tabulación

int main(void) {
    int c;
    int pos = 0; // Posición actual en la línea

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // Calcula cuántos espacios hasta el próximo tab stop
            int spaces = TABSTOP - (pos % TABSTOP);
            for (int i = 0; i < spaces; i++) {
                putchar(' ');
                pos++;
            }
        } else {
            putchar(c);
            pos++;

            if (c == '\n') {
                pos = 0; // Reiniciar la posición al empezar una nueva línea
            }
        }
    }

    return 0;
}
