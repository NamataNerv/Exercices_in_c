/*
##################################################################################################################################

### **Ejercicio 3: Eliminar espacios y tabulaciones extra**

Tu código original no elimina correctamente los espacios múltiples consecutivos ni las tabulaciones. A continuación te muestro la versión corregida:

```c
*/
#include <stdio.h>

void procedure_03(){
    printf("Ingresa texto (presiona Ctrl+D para terminar): \n");
    int caracter, ultimo_caracter = 0;  // Variable para almacenar el último carácter leído

    while ((caracter = getchar()) != EOF) {
        if (caracter == ' ' || caracter == '\t') {
            // Solo imprimimos un espacio si el último carácter no era un espacio o tabulación
            if (ultimo_caracter != ' ' && ultimo_caracter != '\t') {
                putchar(' ');
            }
        } else {
            putchar(caracter);  // Imprimimos cualquier otro carácter
        }
        ultimo_caracter = caracter;  // Actualizamos el último carácter leído
    }

    printf("\n");
}

int main(){
    printf("Inicio de procedimiento 03\n");
    procedure_03();
    return 0;
}
```
/*
no entendi el codigo, dentro del while , quiza porque no entiendo como se procesa el  text stream en winbdows

### **Correcciones clave:**
1. **Condición para imprimir espacios**: Ahora se imprime un solo espacio cuando hay varios consecutivos.
2. **Eliminación de tabulaciones**: Las tabulaciones (`'\t'`) son convertidas a un solo espacio.
3. **Simplicidad**: No necesitas almacenar los caracteres en un array, ya que `putchar()` puede manejar directamente la salida.

---
*/