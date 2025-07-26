/*
Ejercicio 1-17. Escriba un programa que imprima todas las líneas de entrada que 
sean mayores de 80 caracteres. □
    mal, no entendí 
*/

#include<stdio.h>

#define MAXLINE 1000 

int getline(char line [], int maxline);
void copy (char to [], char from[]);


int main(){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max=0;
    while (((len=getline( line,MAXLINE))>0)) {
        if (len>max) {
            max=len;
            
            copy(longest,line);
        }
    }    
    
    if(max>80){  
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
    while ((to[i]=from[i])!='\0') {
        i++;
    }

}

