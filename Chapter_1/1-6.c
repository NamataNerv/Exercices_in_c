#include<stdio.h>


int main (){

    float fahr,celcius;
    int lower, upper , step;
    lower=0;
    upper=300;
    step=20;

    fahr=(float)lower;


    while ((int)fahr<=upper) {
        celcius= ((5)*(fahr-32))/9;
        printf("%3.f \t %6.1f\n",fahr ,celcius);
        fahr =fahr + (float)step;
    }

    return 1;
}
