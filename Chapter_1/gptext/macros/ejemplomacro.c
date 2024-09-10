#include <stdio.h>

// Definición de una macro para PI
#define PI 3.14159

// Definición de una macro para el cálculo del área de un círculo
#define AREA_CIRCULO(radio) (PI * (radio) * (radio))

int main() {
    float radio = 52.0;
    float area;

    // Usamos la macro para calcular el área
    area = AREA_CIRCULO(radio);

    printf("El area de un circulo con radio %2.2f es: %.2f\n", radio, area);

    return 0;
}
