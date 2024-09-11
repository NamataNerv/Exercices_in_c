/*
 **Ejercicio 2: Contar y reemplazar vocales**
Este ejercicio te ayudara a entender como usar `putchar()` para manipular y modificar caracteres. El programa contara cuantas vocales hay en la entrada y reemplazara las vocales por un asterisco (`*`).
.
 **Instrucciones:**
[] 1. Lee los caracteres de la entrada utilizando `getchar()`.
[] 2. Si el caracter es una vocal, reemplazala con un asterisco (`*`) usando `putchar()`.
[] 3. Imprime el numero total de vocales encontradas.
*/


#include<stdio.h>

int vocal(int c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        return 1;
    }
    else
        return 0;
}

int main (){
    
    int c=0;
    char p;
    
    while((p=getchar())!=EOF){
        if(vocal(p)){
            putchar('*');
            c++;
        }
        else{
            putchar(p);
        }
    }


    printf ("\n Se encontraron %d vocales",c);

    return 0;
}