#include<stdio.h>

int main (){

    float Faren,cels;
    int lower, upper, step;
    lower=-20;
    upper=150;
    step=10;

    printf("Celcius |Farenheit\n");
    printf("--------|--------\n");
 
    cels=lower;
    while(cels<=upper){
        Faren=((cels*9)/5)+32;
        printf("%6.0f\t| %4.1f\n",cels,Faren);
        cels=cels+step;
    }

    return 0;
}