

#include<stdio.h>



void procedure1(){
    
    //definicion de variables
    float Faren= -446,cels;
    int c=0;

    //Recoleccion de datos del usuario 
    while (Faren < -445.76){
        if(c>0){
            printf("Error al ingresar dato, ingrese un numero menor\n\tIngresa nuevamente el numero:\n");
        }
        c++;
        printf("Ingresa en Farenheit para convertir a celcius: ");
        scanf("%f",&Faren);
    }
    

    // operaciones y output final 
    printf("Farenht | Celcius\n");
    printf("--------|--------\n");    
    cels=(5.0/9.0)*(Faren-32.0);
    printf("%7.0f\t| %6.2f  \n",Faren,cels);
}


