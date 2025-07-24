/*
    Lo mismo al anterior pero contando la ferecuencia de las letras asccii del aveedario
*/
#include <stdio.h>


int main(){
    int c,wc;
    wc=0;
    
    int arreglo[36]={0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0};

    int i=0;


    while ((c=getchar())!=EOF) {

        if (wc!=0 && c=='\n'||c==' '||c=='\t') {
            //printf(" %d ",wc);
            i++;
            wc=0;
        }else  {
            arreglo[c-'a']=arreglo[c-'a']+1;
            wc++;    
        }
        

    }
    putchar('\n');
    for ( int j=0; j<26 ; j++) {
        printf("%c::%d\n",j+97,arreglo[j]);
    }


    return 0;
}