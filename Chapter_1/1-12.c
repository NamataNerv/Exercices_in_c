// Ejercicio 1-12. Escriba un program a que imprima su entrada una palabra por
// línea.
#include<stdio.h>

#define IN 1        // dentro de la palabra
#define OUT 0       // fuera de la palabra

// Modificacion de ejemplo, pero funciona para imprimir la primera palabra de la linea ingresada

int main (){
    
    int c,nl,nw,nc,state;
    state=OUT;
    nl=nw=nc=0; 
    putchar(':');
    putchar(':');
    while ((c=getchar())!=EOF) {
        ++nc;
        if(c =='\n'){
            ++nl;
            nw=0;
        }
        if (c==' '|| c=='\n' ||c=='\t')
            state= OUT;
        else if (state==OUT){
            state=IN;
            nw++;
        }
        if (state==IN && nw == 1) {
            putchar(c);
            
        }
        if (state==OUT && nw == 0) {
            putchar('\n');
            putchar(':');
            putchar(':');
            
        }
    }   
    //printf("%d %d %d\n", nl,nw,nc);

    return 0;
}
