/*
Ejercicio 1-20. Escriba un programa detab que reemplace tabuladores de la en
trada con el número apropiado de blancos para espaciar hasta el siguiente paro 
de tabulación. Considere un conjunto fijo de paros de tabulación, digamos cada 
n columnas. ¿Debe ser n una variable o un parámetro simbólico? 
*/
/*
    Mejor codigo [ ]
    Mejor solucion [ ]
*/
#include <stdio.h>


#define tabstop 4
#define MAXLINE 1024

/*
 End of file for print
 calculo de tabstop
*/

int getline(char line[]);
int tab_stop(int number);

int main(int argc, char* argv[]){
    int len;
    char line [MAXLINE];
    int c;
    int total_line_char;
    int i=0;
    while ((c=getchar())!=EOF) {
        line[i]=c;
        i++;
        total_line_char=i;
        if (c=='\n') {
            for(int j=0;j<i;j++){
                if(line[j]=='\t'){
                    int n=4-j%tabstop;
                    printf("::%d::",n);
                    switch (n) {
                        case 0:
                            break;
                        case 1:
                            line[j]=' ';
                            break; 
                        case 2:
                            line[j]=' ';
                            j++;
                            i++;
                            line[j]=' ';
                            break;
                        case 3:
                            line[j]=' ';
                            j++;
                            i++;
                            line[j]=' ';
                            j++;
                            i++;
                            line[j]=' ';
                            break;
                    }
                }
            }
            line[total_line_char]='\0';
            i=0;
            total_line_char=0;
            printf("%s",line);
        }
    }



    return 0;
}


/*
Hola mundo como estan
ho  la mun  do
ho\tla mun\tdo

*/