#include<stdio.h>

int main (){

    int Faren,cels;
    int lower, upper, step;
    lower=-20;
    upper=150;
    step=10;

    printf("Cellcius| Farenheit\n");
 
    cels=lower;
    while(cels<=upper){
        Faren=((cels*9)/5)+32;
        printf("%3d\t| %4d\n",cels,Faren);
        cels=cels+step;
    }

    return 0;
}