#include<stdio.h>

#define MAXLINE 1000
// max size of a entry line

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

// Programa imprime la linea de entrada mas larga, mejor version
int main(){
    int len;
    extern int max;
    extern char longest[] ;    

    max=0;
    while ((len=getline())>0) {
        if (len>max) {
            max=len;
            copy();
        }
    }
    if (max>0) {
        printf("%s",longest);
    }
    return 0;
}
// Vercion especializada
int getline(void){
    int c, i;
    extern char line[];
    for (i=0; i<MAXLINE && ((c=getchar())) != EOF && c!='\n';i++) {
        line[i]=c;
    }
    if (c== '\n'){
        
    }

}

void copy(void);