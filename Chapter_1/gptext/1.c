/*
Escribe un programa en C que calcule la suma de los números enteros de un arreglo y luego imprima el resultado. Sin embargo, esta vez, el arreglo contendrá números enteros negativos y el programa debe ignorarlos al calcular la suma.
*/

#include<stdio.h>

int main (){
    int num,count=0;
    printf("Ingresa el numero: ");
    scanf("%d",&num);
    //captar errores
    if(num>-1){
        printf("Error Deve ingresar numero negativo");
        return 0;
    }

    num*=-1;

    while(num>0){
        count+=num%10;
        num=num/10;
    }

    printf("Ell resultado es %3d",count);

    return 0;
}