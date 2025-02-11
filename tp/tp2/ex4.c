#include <stdio.h>

char donner_majuscule (char c){
    if (c >= 'a' && c <= 'z'){
        return c - 32;
    }
    return c;
}

void mettre_en_majuscule(char *a){
    char *p;
    p = a;
    while(*p != '\0'){
        printf("%c", donner_majuscule(*p));
        p++;
    }

}

int  donner_la_longueur (char *str){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

void inverser(char *str){
    int i = 0;
    int j = donner_la_longueur(str) - 1;
    char temp;
    while (i < j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("La chaine inversée est: %s\n", str);
}

void saisir(char *str){
    printf("Saisir une chaine de caractere: ");
    gets(str);
}

void afficher(char *str){
    printf("La chaine est: %s\n", str);
}

int sont_egales(char *str1, char *str2){
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]){
            return 0;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0'){
        return 1;
    }
    return 0;
}

int main(void){
    char str1[100]="meOw";
    int longueur;
    longueur = 0;
    char str2[100];

    char str3[100]="chat";
    char str4[100]="chat";
    
    mettre_en_majuscule(&str1);
    longueur = donner_la_longueur(str1);
    printf("\nLa longueur de la chaine est: %d\n", longueur);
    inverser(&str1);
    saisir(&str2);
    afficher(&str2);
    if (sont_egales(str3, str4)){
        printf("Les chaines sont egales\n");
    }else{
        printf("Les chaines ne sont pas egales\n");
    }
}