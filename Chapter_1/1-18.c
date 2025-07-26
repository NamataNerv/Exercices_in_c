/*
    @Problema:  
                -Ejercicio 1-18. Escriba un programa que elimine los blancos y los tabuladores 
                 que estén al final de cada línea de entrada, y que borre completamente las líneas 
                 en blanco. 
    @Estado:    -Listo , pero probablemente muy poco optimo


for size ('\t' && ' ').final()=> delete
for if line ==0 start tp emd => null
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

