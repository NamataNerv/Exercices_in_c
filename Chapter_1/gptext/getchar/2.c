/*
##################################################################################################################################

Ejercicio 2: Convertir entrada a mayúsculas
Descripción:

Crea un programa que lea caracteres de la entrada estándar con getchar() y convierta todas las letras minúsculas a mayúsculas, mostrando el resultado en la salida estándar. El programa debe continuar procesando hasta que se encuentre EOF.

Pistas:

Conversión manual: Utiliza la tabla ASCII; si un carácter está entre 'a' y 'z', conviértelo restando 32 para obtener la letra mayúscula equivalente.
Uso de <ctype.h>: Incluye este encabezado y utiliza la función toupper(c) para convertir caracteres a mayúsculas.
Mantén los demás caracteres: No modifiques caracteres que no sean letras minúsculas (números, signos de puntuación, espacios, etc.).
Ejemplo de ejecución:

@@@@@@@@@@@@@@@@@@@@@
Copiar código
Ingresa texto (presiona Ctrl+D para terminar):
¡Hola Mundo!
Resultado:
¡HOLA MUNDO!
@@@@@@@@@@@@@@@@@@@@@
*/
#include<stdio.h>

//DEFINICION DE FIN DEL ARCHIVO
//#define EOF -1



void procedure_02(){
    printf("Ingresa texto (presiona Ctrl+D para terminar): \n");
    int caracter,c=0;
    char xddd[70];
    xddd[70]='\n';

    while((caracter=getchar()) != EOF ){
        if((caracter>96) && (caracter<123)){
            caracter=caracter-32;
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
    printf("Inicio de procedimiento 02\n");
    procedure_02();
    return 0;
}


/*
Resultado
PS C:\Users\Namata_Ner(d)\Documents\Dev_c\Exercices_in_c\chapter_1\gptext\getchar> gcc 2.c -o xd.exe; .\xd.exe
Inicio de procedimiento 02
Ingresa texto (presiona Ctrl+D para terminar): 
uihsdfa
^Z
Resultado: 
UIHSDFA
ev◄




it kinda works
*/