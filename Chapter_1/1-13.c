/*
    Escriba un proograma que imprima el historiograma de las longitudes de las palabras de su entrada.
    Es facil dibujar el historiograma con las barras horizontales; la orientacion vertical es un reto mas interesante
*/
#include <stdio.h>


// no se com o evitar los casos forntera
// no se como funciona el while en este caso, no entiendo porque me ejecutan las intrucciones dentro del while cuando preciono \n , no se porque no se ejectura todo de una mejor
int main(){
    int c,wc;
    wc=0;
    
    int arreglo[100];

    int i=0;

    while ((c=getchar())!=EOF) {

        if (wc!=0 && c=='\n'||c==' '||c=='\t') {
            printf(" %d ",wc);
            arreglo[i]=wc;
            i++;
            wc=0;
        }else  {
            wc++;    
        }
        

    }
    putchar('\n');
    for ( int j=0; j<=100 && arreglo[j]>0; j++) {
        printf("::%d\n",arreglo[j]);
    }


    return 0;
}