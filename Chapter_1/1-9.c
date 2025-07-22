#include<stdio.h>
// Copiar entrada a la salida Uno o mas blancos por solo un blanco
// No realizado porque no se me ocurrio



int main (){
    
    int c;
    int n;
    
    while ((c=getchar())!=EOF ) {
        if (c != ' ') {
            putchar(c);
            n=0;
        } else if (n==0) {
            putchar(c);
            n=1;
        }
        // uso de flags para esto
    }
    
    // no logre hacer este ejercicio, devera rea hacer , o hacer mas ejerceicios? como , soluciono eso de que no se me ocurran soluciones?
    return 0;
}