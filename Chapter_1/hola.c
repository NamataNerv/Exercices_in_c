#include <stdio.h> 
#include <stdlib.h>

#define MAXLINE 1000  // Máximo tamaño de una línea de entrada

// Global variables (often declared with 'extern' in other files, but here they are defined)
int max;                // Máxima longitud vista hasta el momento
char line[MAXLINE];     // Línea de entrada actual
char longest[MAXLINE];  // La línea más larga se guarda aquí

// Function prototypes
int getline_custom(void); // Renamed to avoid conflict with standard library function
void copy(void);
void print_message(const char* msg);

int numero= EOF;
/*
 * main: imprime la línea de entrada más larga; versión especializada
 */
int main() {
    int len;
    // No need for 'extern' here, as 'max' and 'longest' are global in this file.
    extern int max;
    extern char longest[];

    max = 0; // Initialize max length to 0
    
    // Read lines until EOF or an error occurs
    while ((len = getline_custom()) > 0) {
        if (len > max) {
            max = len;
            copy(); // Copy the new longest line
        }
    }

    if (max > 0) {  // Hubo una línea ?
        printf("%s", longest); 
    }

    print_message("Hola mundo");
    return 0; // Indicate successful execution
}

/*
 * getline_custom: versión especializada para leer una línea de entrada
 * Retorna la longitud de la línea o 0 si es EOF.
 */
int getline_custom(void) {
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    if (c == '\n') { // If the line ended with a newline, store it
        line[i] = c;
        ++i;
    }
    
    line[i] = '\0'; // Null-terminate the string
    return i;       // Return the length of the line
}

/*
 * copy: copia la línea de 'line' a 'longest'
 */
void copy(void) {
    int i = 0;
    extern char line[], longest[];

    // Copy characters until the null terminator is reached
    while ((longest[i] = line[i]) != '\0') {
        ++i;
    }
}

void print_message(const char* msg){
    printf("%s\n",msg);
}
