/*
##################################################################################################################################

Ejercicio 3: Eliminar espacios y tabulaciones extra
Descripción:

Escribe un programa que lea caracteres utilizando getchar() y copie su entrada a la salida, reemplazando cada cadena de uno o más espacios o tabulaciones consecutivos por un solo espacio. Esto significa que si el programa encuentra varios espacios seguidos, solo debe imprimir uno.

Pistas:

Estado previo: Mantén una variable que indique si el carácter anterior era un espacio o una tabulación.
Condición para imprimir: Solo imprime un espacio si el carácter actual es un espacio o tabulación y el anterior no lo era.
Caracteres de espacio en blanco: Considera los espacios ' ' y las tabulaciones '\t'.
Ejemplo de ejecución:

@@@@@@@@@@@@@@@@@@@@@
Copiar código
Ingresa texto (presiona Ctrl+D para terminar):
Este    es    un    texto    con     muchos    espacios.
Resultado:
Este es un texto con muchos espacios.
@@@@@@@@@@@@@@@@@@@@@

*/
#include<stdio.h>

void procedure_03(){
    printf("Ingresa texto (presiona Ctrl+D para terminar): \n");
    int caracter,c=0;
    char xddd[150];
    xddd[150]='\n';

    while((caracter=getchar()) != EOF ){
        if(caracter==9){
            caracter=32;
            xddd [c]=caracter;
        }
        else{
            xddd [c]=caracter;
        }
        c++;
    }
    printf("Resultado: \n");
    printf("%s \n",xddd);

}


int main(){
    printf("Inicio de procedimiento 03\n");
    procedure_03();
    return 0;
}


/*
Resutado:
PS C:\Users\Namata_Ner(d)\Documents\Dev_c\Exercices_in_c\chapter_1\gptext\getchar> gcc 3.c -o xd.exe; .\xd.exe
Inicio de procedimiento 03
Ingresa texto (presiona Ctrl+D para terminar): 
saduojh dslk    dslkm^Z

^Z
Resultado: 
saduojh dslk dslkm→


*/