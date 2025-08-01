/*
Ejercicio 1-20. Escriba un programa detab que reemplace tabuladores de la en
trada con el número apropiado de blancos para espaciar hasta el siguiente paro 
de tabulación. Considere un conjunto fijo de paros de tabulación, digamos cada 
n columnas. ¿Debe ser n una variable o un parámetro simbólico? 
*/

#include<stdio.h>

#define MAXLINE 1000 
#define TABSTOP 4

int getline(char line [], int maxline);
void detab (char to [], const char from[]);


int main(){
    char line[MAXLINE];
    char corrected[MAXLINE];

    while ((getline( line,MAXLINE)>0)) {
        detab(corrected,line);
        printf("%s",corrected);
    }    
    
    return 0;
}


// lee una linea de entrada y almacena en 's'. devuelve su longitud.
int getline(char s [], int lim){
    int c,i, low, dec;
    dec=0;
    for(i=0;i<lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i ){
        s[i]=c;
    }
    if (c=='\n') {
        s[i++]=c;
    }  
    s[i]='\0';

    return i;
}

// Copy copia from en to , supone que es lo suficientemente grande
void detab (char to [],const char from[]){
    int i=0;
    int j=0;
    // solucion caso frontera 
    if (from[0]=='\t') {
        to[0]=' ';
        to[1]=' ';
        to[2]=' ';
        to[3]=' ';
        j=4;
        i=1;
    }

    while ((to[j]=from[i])!='\0') {

        if (from[i+1]=='\t'){
           int n=(i+2)%4;
            switch (n) {
                case 0:
                {
                    j++;
                    to[j]=' ';
                    i++;
                    j++;
                    i++;
                    break;
                }
                case 1:
                {
                    j++;
                    to[j]=' ';
                    j++;
                    to[j]=' ';
                    j++;
                    to[j]=' ';
                    j++;
                    to[j]=' ';
                    i++;
                    j++;
                    i++;
                    break;
                }
                case 2:
                {
                    j++;
                    to[j]=' ';
                    j++;
                    to[j]=' ';
                    j++;
                    to[j]=' ';
                    i++;
                    j++;
                    i++;
                    break;
                }
                case 3:
                {
                    j++;
                    to[j]=' ';
                    j++;
                    to[j]=' ';
                    i++;
                    j++;
                    i++;
                    break;
                }
                default:
                    printf("::%d:=",n);
                    printf(">MACRO_ERROR_");
                    break;
            }
        }
        else {
            j++;
            i++;
        }
    }
}


