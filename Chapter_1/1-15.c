/*
Ejercicio 1-15. Escriba de nuevo el programa de conversión de temperatura de 
la sección 1.2, de modo que utilice una función para la conversión. □
*/

#include<stdio.h>

float far_to_cell(int F_degrees);


int main (){
    float Faren,cels;
    float lower, upper, step;
    lower=0;
    upper=300;
    step=20;
    // lieteralmente tenia el header hecho
    printf("Farenht | Celcius\n");
    printf("--------|--------\n");
 
    Faren=lower;
    while(Faren<=upper){
        //Faren=((cels*9.0)/5.0)+32;
        //cels=(5.0/9.0)*(Faren-32.0);
        printf("%7.0f\t| %6.1f  \n",Faren,far_to_cell(Faren));
        Faren += step;
    }

    return 0;
}


float far_to_cell(int F_degrees){
    return (5.0/9.0)*(F_degrees-32.0) ;
}