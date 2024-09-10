/*

### Ejercicio 2: Macro para encontrar el máximo entre dos números
Crea una macro llamada `MAXIMO` que reciba dos números y devuelva el mayor de ellos.
Utiliza esta macro para comparar dos números ingresados por el usuario y mostrar cuál es el mayor.

### Ejemplo de ejecución:
```
Ingrese el primer numero: 15
Ingrese el segundo numero: 20
El mayor número es: 20


*/

#include<stdio.h>



#define NUMERO_MAYOR(a,b) (a>b)?a:b



int main ()
{
    int a,b;
    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    
    printf("El mayor numero es: %d", NUMERO_MAYOR(a,b));

    return 0;
}