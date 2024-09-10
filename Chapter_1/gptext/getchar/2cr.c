/*
---

### **Ejercicio 2: Convertir entrada a mayúsculas**

En este ejercicio, tu código tiene un pequeño problema con la forma en que almacenas y procesas los caracteres. `xddd[70]` es un solo carácter, lo que puede causar desbordamiento en la memoria. A continuación te muestro una versión corregida:

```c
*/

#include <stdio.h>
#include <ctype.h>  // Para usar la función toupper()

void procedure_02(){
    printf("Ingresa texto (presiona Ctrl+D para terminar): \n");
    int caracter;

    while((caracter = getchar()) != EOF) {
        if(caracter >= 'a' && caracter <= 'z') {
            caracter = toupper(caracter);  // Usamos la función toupper para convertir a mayúscula
        }
        putchar(caracter);  // Imprimimos el carácter convertido o no
    }

    printf("\n");
}

int main(){
    printf("Inicio de procedimiento 02\n");
    procedure_02();
    return 0;
}






/* 
### **Correcciones clave:**
1. **Uso de `toupper()`**: Utilizamos la función `toupper()` de la librería `ctype.h` para simplificar la conversión de minúsculas a mayúsculas.
2. **Eliminación de la cadena `xddd[]`**: No era necesario almacenar los caracteres en un array, ya que podemos procesarlos y mostrarlos directamente usando `putchar()`.
3. **Simplicidad**: El código ahora es más compacto y eficiente.
*/