/*
Escribe un programa en C que imprima la tabla de multiplicar de un número entero ingresado por el usuario. La tabla debe mostrar los productos del número entero multiplicado por los números enteros del 1 al 10.
*/
#include<stdio.h>


void procedure_01();


int main(){
    procedure_01();

    return 0;
}

void procedure_01()
{
    int xd;
    printf("Ingresa numerote: ");
    scanf("%d",&xd);

    for(int i = 0;i<10;i++)
    {
        printf("\t%2d*%2d=%3d\n",i+1,xd,((i+1)*xd));
    }

}