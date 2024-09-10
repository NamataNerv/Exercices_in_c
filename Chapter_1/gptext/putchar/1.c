/*
### **Ejercicio 1: Imprimir una pirámide de asteriscos**
En este ejercicio, utilizarás `putchar()` para imprimir una pirámide de asteriscos basada en la cantidad de filas que el usuario ingrese.

#### **Instrucciones:**
1. Pide al usuario que ingrese el número de filas para la pirámide.
2. Utiliza `putchar()` para imprimir la pirámide fila por fila, alineada en el centro.

*/
#include<stdio.h>




int main(){
    
    int a;
    // getchar deveria tomar un caracter , pero se pueden hacer cosas para que imprima una linea
    //a=getchar();
    printf("Hola, ingresa la cantidad de filas para que se forme una cartidad de asteriscos: ");
    scanf("%d",&a);
    if (a<0){
        return 0;
    }
    for(int i=0;i<a;i++){
    
        for(int f=0;f<=i;f++){
            putchar('*');
            putchar(' ');
        }
        putchar('\n');
    }
    
    

    return 0;
}