#include <stdio.h>

int main(void){
    char str[100];
    int i;
    char *p;
    p = str;
    int length;
    int taille;

    length = 0;
    taille = 0;

    printf("Entrez une chaine de caractères : ");
    gets(str);
    //version tableau
    for (i = 0; str[i] != '\0'; i++){
        length++;
    }
    printf("La longueur de la chaine de caractères est %d\n", length);
    //version pointeur
    while (*p != '\0'){
        taille++;
        p++;
    }
    printf("La longueur de la chaine de caractères est %d\n", taille);
}