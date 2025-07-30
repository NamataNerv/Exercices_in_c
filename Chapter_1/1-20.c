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
#include<stdio.h>

#define MAXLINE 1000 

int getline(char line [], int maxline);
void copy (char to [], char from[]);


int main(){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max=0;
    while (((len=getline( line,MAXLINE))>0)) {
        //printf("len:: %d\n",len);
        if (len>max) {
            max=len;
            
            copy(longest,line);
        }
    }    
    
    if(max>0){  
        //printf("%s",longest);
    }

    //putchar('x');
    return 0;
}


// lee una linea s, regresa su longitud
int getline(char s [], int lim){
    int c,i, low, dec;
    dec=0;
    for(i=0;i<lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i ){
        s[i]=c;
    }
    if (c=='\n') {
        s[i]=c;
        i++;
    }  
    s[i]='\0';
    
    if (s[i-2]==' ' || s[i-2]=='\t'){
        
        low=i;
        low=low-2;
        // detectar until i get a character or point or any ascci caracter 
        for(; low>=0 && (s[low]== '\t' ||s[low]== ' ' || !(s[low]>33&&s[low]<126));--low){
            s[low]='\0';
            if(low==0 ){
                return 1;
            }
        }
        
        low++;
        s[low]='\n';
        low++;
        s[low]='\0';
        dec=i-low;
    }
    




    return i-dec;
}

// Copy copia from en to , supone que es lo suficientemente grande
void copy (char to [], char from[]){
    int i;
    i=0;
    while ((to[i]=from[i])!='\0') {
        i++;
      //  printf(" :: si ::");
    }
    //putchar('\n');
}


/*
Hola mundo como estan
ho  la mun  do
ho\tla mun\tdo

*/