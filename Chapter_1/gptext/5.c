#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para cambiar el color del texto
void cambiarColor(int color) {
    printf("\033[0;%dm", color);// que hace esta linea
}

int main() {
    int numeroIngresado, numeroGanador;
    
    // Semilla aleatoria para el número ganador
    srand(time(0));
    numeroGanador = rand() % 10 + 1; // Número aleatorio entre 1 y 10
    
    // Introducción
    cambiarColor(34); // Azul
    printf("~Bienvenido a la ruleta magica!\n");
    cambiarColor(36); // Blanco
    printf("Adivina un numero entre 1 y 10: ");
    
    // Leer el número del usuario
    scanf("%d", &numeroIngresado);
    
    // Comparar el número ingresado con el número ganador
    while(1){
    if (numeroIngresado == numeroGanador) {
        cambiarColor(32); // Verde
        printf("Felicidades! Adivinaste el numero ganador: %d\n", numeroGanador);
        cambiarColor(37); // Blanco
        return 0;
    } else {
        cambiarColor(31); // Rojo
        printf("Oh no, el numero ganador era: %d. Mejor suerte la proxima vez!\n", numeroGanador);
    }
        // Restablecer el color
        cambiarColor(36); // Blanco
        printf("Adivina un numero entre 1 y 10: ");
        scanf("%d", &numeroIngresado);
    }
    
    
    
    return 0;
}
