#include<stdio.h>

int main (){

    float Faren,cels;
    float lower, upper, step;
    lower=0;
    upper=300;
    step=20;

    printf("Farenht | Celcius\n");
 
    Faren=lower;
    while(Faren<=upper){
        //Faren=((cels*9.0)/5.0)+32;
        cels=(5.0/9.0)*(Faren-32.0);
        printf("%7.0f\t| %6.1f  \n",Faren,cels);
        Faren += step;
    }

    return 0;
}