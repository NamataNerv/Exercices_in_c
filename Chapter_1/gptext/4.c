/*
Crea un programa en C que calcule el promedio de una serie de números enteros ingresados por el usuario. El programa debe pedir al usuario que ingrese la cantidad de números que desea ingresar y luego leer cada número. Finalmente, debe calcular y imprimir el promedio de los números ingresados.
*/
#include <stdio.h>

int main() {
    int cantidad, i, numero;
    int suma = 0;
    float promedio;

    // Pedir al usuario la cantidad de números
    printf("Ingresa la cantidad de numeros que deseas ingresar: ");
    scanf("%d", &cantidad);

    // Validar que la cantidad sea mayor que 0
    if (cantidad <= 0) {
        printf("La cantidad debe ser mayor que 0.\n");
        return 1;
    }

    // Leer los números ingresados por el usuario
    for (i = 0; i < cantidad; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &numero);
        suma += numero;  // Sumar los números
    }

    // Calcular el promedio
    promedio = (float)suma / cantidad;

    // Imprimir el promedio
    printf("El promedio de los numeros ingresados es: %.2f\n", promedio);

    return 0;
}
