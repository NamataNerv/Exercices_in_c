// ¿Cómo probaría el program a para contar palabras? ¿Qué clase
// de entrada es la más conveniente para descubrir errores si éstos existen?

// R: Probaria con texto normal en la terminal , texto y saltos de linea

#include<stdio.h>

#define IN 1        // dentro de la palabra
#define OUT 0       // fuera de la palabra

// Cuenta lineas , palabras y caracteres de la entrada

int main (){
    
    int c,nl,nw,nc,state;
    state=OUT;
    nl=nw=nc=0; 
    
    while ((c=getchar())!=EOF) {
    ++nc;
        if(c =='\n')
            ++nl;
        if (c==' '|| c=='\n' ||c=='\t')
            state= OUT;
        else if (state==OUT){
            state=IN;
            nw++;
        }
    }   
    printf("%d %d %d\n", nl,nw,nc);

    return 0;
}
