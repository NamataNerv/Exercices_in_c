/*
Ejercicio 1-21. Escriba un programa entab que reemplace cadenas de blancos 
por el mínimo número de tabuladores y blancos para obtener el mismo espaciado. 

Cuantos espaciados me da un tab? en consola?
    -> 8 espacios


Considere los paros de tabulación de igual manera que para detab. Cuando un 
tabulador o un simple espacio en blanco fuese suficiente para alcanzar un paro 
de tabulación, ¿a cuál se le debe dar preferencia?
> Al tabulador porque ocupa menos espacio en memoria
*/


#include <stdio.h>

#define ESPACIADO 8
#define MAXLINE 1024

void formato_esp_tab(char[],char[],int);

int main(int argc, char* argv[]){
    char c;
    int i=0;
    char ingreso [MAXLINE];
    char formateo [MAXLINE];
    int adder=0;
    while ((ingreso[i]=c=getchar())!=EOF) {
             
        if(c==' '){
            adder++;
        }

        if (c=='\t') {
            adder=adder+ESPACIADO;
        }  
        printf("::add:%d::",adder);
        

        if (c=='\n') {
            i++;
            ingreso[i]='\0';
            formato_esp_tab(ingreso,formateo,i);
            printf("\n%s",ingreso);
            adder=0;
            i=0;
        }
        i++;
        putchar(c);
    }    

    return 0;
}




// resolver esto de manera indibidual y ver si existen mejores formas de implementar el algoritmo de manera mas comprensible y optimizada
void formato_esp_tab(char from [],char to[], int length){
    int counter=0;
    for (int i=0;i<=length;i++) {
        if (from [i]==' ') {
            counter++;
        }
        if (from [i]=='\t') {
            counter=counter+ESPACIADO;
        }
        if ((from [i]==' '||from [i]=='\t')&&(from [i+1]>='A' || from [i+1]<='z')){
            counter/ESPACIADO;

            
        }

        to[i]=from[i];
    }
}