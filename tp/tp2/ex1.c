#include <stdio.h>

void copie(char *a, char *b){
    while(*a != '\0'){
        *b = *a;
        a++;
        b++;
    }
}

int main(void) {
    //copie d'une chaine a dans une chaine b par tableau
    char a[100]="hello";
    char b[100];
    int i ;
    i= 0;
    for (i = 0; a[i] != '\0'; i++){
        b[i] = a[i];
    }
    printf("a = %s\n", a);
    printf("b = %s\n", b);

    //copie d'une chaine a dans une chaine b par pointeur
    char c[100]="world";
    char d[100];
    char *p2;
    char *p3;
    p2 = c;
    p3 = d;
    while(*p2 != '\0'){
        *p3 = *p2;
        p2++;
        p3++;
    }
    printf("a = %s\n", a);
    printf("b = %s\n", b);

    printf("utilisation de la fonction copie\n");
    char e[100]="bonjour";
    char f[100];
    copie(&e, &f);
    printf("e = %s\n", e);
    printf("f = %s\n", f);
}