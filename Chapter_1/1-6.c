#include<stdio.h>
// Verificar que la exprecion getcahr()! = EOF es o o 1


int main (){

    
    
    int alfa= getchar() != EOF;
    printf("\nHola mundo %d \n", alfa);
    
    return 0;
}
// Es 0 o 1 dependiendo del valor de getchar asignado, si hagop ctrl d es 0, si escribo texto es 1