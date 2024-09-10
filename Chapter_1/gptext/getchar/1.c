
/*

Ingresa texto (presiona Ctrl+D para terminar):
Hola, este es un texto de ejemplo.
Contiene varias líneas
y palabras.

Resultados:
Caracteres: 61
Palabras: 10
Líneas: 3

*/

#include<stdio.h>



void procedure_1() {
    int c, space=1, line=0;
    int contador = 0;

    printf("Ingresa texto (El programa terminara cuando escribas CTRL+D (^D) y luego des RETURN): \n");

    while ((c = getchar()) != EOF) {
        contador++;
        if (c==10){
            space++;
            line++;
        }
        if (c==32)  
            space++;
        
    }
    

    printf("El numero total de caracteres ingresados es: %d\n", contador);

    printf("Resultados:\n");
    printf("Caracteres:: %d\n",contador-space+1);
    printf("Palabras:: %d \n",space);
    printf("Lineas:: %d\n",line);


}




int main (){
    
    printf("Inicio de procedimiento 01\n");
    procedure_1();

    return 0;
}