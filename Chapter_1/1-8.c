#include<stdio.h>
// programa que cuente los:
//# espacio en blanco, tabulaciones  nuevas lineas
// ' ' ascii 32
// '\t' ascii 9
// '\n' ascii 10 


int main (){
    
    int c;
    int n=0;
    
    while ((c=getchar())!=EOF) {
        if (c==' ' ||c=='\t' || c=='\n'  ) {
            n++;
        }
    }
    printf("\n%d\n",n);
    return 0;
}