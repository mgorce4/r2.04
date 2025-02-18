#include <stdio.h>

int  donner_la_longueur (char *str){
    int i = 0;
    char *p;
    while (*p){
        i++;
        p++;
    }
    return i;
}

char donner_majuscule (char c){
    if (c >= 'a' && c <= 'z'){
        return c - 'A' + 'a';
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

int main(void){
    char str1[81];
    char str2[81];

    gets(str1);
    gets(str2); 
    printf("La longueur de la chaine str1 est: %d\n", donner_la_longueur(str1));
    mettre_en_majuscule(str1);
    printf(str1);
    mettre_en_majuscule(str2);
    printf(str2);
    if (sont_egales(str1, str2)){
        printf("Les chaines sont egales\n");
    } else {
        printf("Les chaines ne sont pas egales\n");
    }
    inverser(str2);


}