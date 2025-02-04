#include <stdio.h>

int main(void){
    int a;
    a = 10;
    /*printf("Entrez un nombre entier : ");
    scanf("%d", &a);*/

    printf("le predecesseur de %d au format decimal : %d, au format hexadecimal : %x, au format octal %o\n", a, a-1, a-1,a-1);
    printf("le successeur de %d au format decimal : %d, au format hexadecimal : %x, au format octal %o\n", a, a+1, a+1,a+1);
    return 0;
}