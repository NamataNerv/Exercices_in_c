#include<stdio.h>
// Escribir un programa que copie su entrada a la salida
// cada \t \b y \    remplazano a  \\ putchar(\) x2 
// Que las tabulaciones y espacios sean visibles sin confuciones
// ojo ctrl +h es el equivalente al backspace en mi consola



int main (){
    
    int c;
    int n;
    
    while ((c=getchar())!=EOF ) {
        if (c == 92 || c== '\t' || c== '\b' ) {
            putchar(92);
            putchar(92);
        
        } 
        else {
            putchar(c);
        }
        
        // uso de flags para esto
    }
    
    // no logre hacer este ejercicio, devera rea hacer , o hacer mas ejerceicios? como , soluciono eso de que no se me ocurran soluciones?
    return 0;
}