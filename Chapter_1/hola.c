#include<stdio.h>

// cuenta los digitos espacios en blanco y otros


int power(int m, int n);


int main(){
    
    int i;
    for (i=0;i<30;++i) {
        printf(" 2 ^ %2d = %9d\n",i,power( 2, i));
    }

    printf("Ahora otro ejemplo:: \n");
    for (i=0;i<10;++i) {
        printf(" %d  %d  %d\n",i,power( 2, i),power(-3, i));
    }



    return 0;
}

int power(int base, int n){
    int i, p;
    p=1;

    for (int i=1;i<n;i++) {
        p=base*p;
    }


    return p;
}