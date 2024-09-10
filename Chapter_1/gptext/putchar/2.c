/*
 **Ejercicio 2: Contar y reemplazar vocales**
Este ejercicio te ayudará a entender cómo usar `putchar()` para manipular y modificar caracteres. El programa contará cuántas vocales hay en la entrada y reemplazará las vocales por un asterisco (`*`).
.
 **Instrucciones:**
1. Lee los caracteres de la entrada utilizando `getchar()`.
2. Si el carácter es una vocal, reemplázala con un asterisco (`*`) usando `putchar()`.
3. Imprime el número total de vocales encontradas.
*/


#include<stdio.h>


int vocal(int x){
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
        return '*';
    return x;
}



int main (){

    char string [730] = "orem Ipsum es simplemente el texto de relleno de las imprentas y archivos de texto. Lorem Ipsum ha sido el texto de relleno estándar de las industrias desde el año 1500, cuando un impresor (N. del T. persona que se dedica a la imprenta) desconocido usó una galería de textos y los mezcló de tal manera que logró hacer un libro de textos especimen. No sólo sobrevivió 500 años, sino que tambien ingresó como texto de relleno en documentos electrónicos, quedando esencialmente igual al original. Fue popularizado en los 60s con la creación de las hojas Letraset, las cuales contenian pasajes de Lorem Ipsum, y más recientemente con software de autoedición, como por ejemplo Aldus PageMaker, el cual incluye versiones de Lorem Ipsum."; 


    

    for(int i=0;i<730;i++){
        printf("%c", vocal(string[i]));
    }

    return 0;
}