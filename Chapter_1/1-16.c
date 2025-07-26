/*
Ejercicio 1-16. Corrija la rutina principal del programa de la línea más larga de 
modo que imprima correctamente la longitud de líneas de entrada arbitrariamente
largas, y tanto texto como sea posible. □
    
   @Respuesta::  mal, no entendí 
*/

#include<stdio.h>

#define MAXLINE 1000 // tmaño maximo  de la linea de entrada

int getline(char line [], int maxline);
void copy (char to [], char from[]);


// se imprime la linea de entrada mas larga
int main(){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max=0;
    while ((len=getline( line,MAXLINE)>0)) {
        if (len>max) {
            max=len;
            copy(longest,line);
        }
    }    
    if(max>0){  // hubo una linea grande 
        printf("%s",longest);
    }


    return 0;
}


// lee una linea s, regresa su longitud
int getline(char s [], int lim){
    int c,i;
    for(i=0;i<lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i ){
        s[i]=c;
    }
    if (c=='\n') {
        s[i]=c;
        i++;

    }  
    s[i]='\0'; 
    return i;
}

// Copy copia from en to , supone que es lo suficientemente grande
void copy (char to [], char from[]){
    int i;
    i=0;
    while ((to[i]=from[i])!='\n') {
        i++;
    }
    i++;
    to[i]='\0'; // esto es para que me corte el string sin poner mierda
}



