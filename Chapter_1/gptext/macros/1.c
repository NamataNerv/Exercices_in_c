/*
### Ejercicio 1: Macro para calcular el volumen de una esfera
Escribe una macro llamada `VOLUMEN_ESFERA` que tome como argumento el radio de una esfera y calcule su volumen utilizando la fórmula:

\[
V = \frac{4}{3} \times \pi \times r^3
\]



Ej codigo:
Ingrese el radio de la esfera: 5
El volumen de la esfera con radio 5.00 es: 523.60


*/
#include<stdio.h>

#define PI 3.14159

#define VOLUMEN_ESFERA(radio) (4 * PI * radio * radio * radio) / 3 



int main ()
{
    float r,res;
    printf("Ingrese el radio de la esfera: ");
    scanf("%f",&r);
    res=VOLUMEN_ESFERA(r);
    printf("El volumen de la esfera con radio %.2f es: %4.2f",r,res);

    return 0;
}