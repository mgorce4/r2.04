#include <stdio.h>

void tranformerEnMajuscule(char *a){
    char *p;
    p = a;
    while(*p != '\0'){
        printf("%c", *p-32);
        p++;
    }
}

int main(void){
    char str1[100];
    char str2[100];
    char *p1;
    p1 = str1;

    printf("saisir une chaine de caractere en minuscule: ");
    gets(str1);

    while (*p1 != '\0'){
        printf("%c", *p1-32);
        p1++;
    }
    printf("\n");

    printf("saisir une deuxième chaine de caractere en minuscule: ");
    gets(str2);
    tranformerEnMajuscule(str2);

}