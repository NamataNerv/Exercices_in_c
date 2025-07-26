/*
    @Problema:  
                -Ejercicio 1-19. Escriba una función reverse(s) que invierta la cadena de caracteres.
                 Usela para escribir un programa que invierta su entrada, línea a línea. □
    @Estado:    -Listo
                - Podria hacerse mejor si el codigo , no confio en mi procedimiento, creo que existen mas eficientes


    Realizar una copia inversa 

    getline 
        Copia inversa
        print copia

*/

#include<stdio.h>

#define MAXLINE 1000 

int getline(char line [], int maxline);
void copy_r (char to [], char from[], int len);


int main(){
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];


    while (((len=getline( line,MAXLINE))>0)) {
        copy_r(longest,line, len);
        printf("%s\n",longest);
        //putchar(10);
    }    
    

    return 0;
}



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


void copy_r (char to [], char from[], int len){
    int i;
    i=0;
    
    len--;
    len--;
    for ( ;len>=0 ; i++, len--) {
        to[i]=from[len];
    }


    to[i]='\0';

}

