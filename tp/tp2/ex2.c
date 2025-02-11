#include <stdio.h>

int main(void){
    //saisir une chaine str1 (utiliser gets) de maniere pointeur
    char str1[100];
    char *p1;
    p1 = str1;
    printf("saisir une chaine de caractere: ");
    gets(str1);

    //saisir une chaine str2 (utiliser gets) de maniere pointeur
    char str2[100];
    char *p2;
    p2 = str2;
    printf("saisir une chaine de caractere: ");
    gets(str2);

    //copier la chaine str1 dans str3
    char str3[100];
    char *p3;
    p3 = str3;
    p1 = str1;
    while(*p1 != '\0'){
        *p3=*p1;
        p1++;
        p3++;
    }
    printf("str3 = %s\n", str3);

    //concaténer str2 à str3
    p2 = str2;
    while(*p2 != '\0'){
        *p3 = *p2;
        p2++;
        p3++;
    }
    printf("str3 = %s\n", str3);
}