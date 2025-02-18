#include <stdio.h>

void main(void){
    char *couleur[] = {"rouge", "vert", "bleu", "jaune", "noir", NULL};

    printf("%c\n", couleur[0][0]);
    printf("%c\n", couleur[0][1]);
    printf("%c\n", couleur[1][0]);
    printf("%c\n", couleur[0]);
    printf("%c\n", couleur[1]);
    printf("%c\n", couleur);
    printf("%c\n", couleur+1);
    printf("%c\n", *couleur[0]);
    printf("%c\n", *couleur[1]);
    printf("%c\n", *(couleur+1));
    printf("%c\n", **couleur);

    // Affichage des couleurs
    for(int i = 0; couleur[i] != NULL; i++){
        printf("%s\n", couleur[i]);
    }
    // Affichage des couleurs sans le premier caractère
    for(int i = 0; couleur[i] != NULL; i++){
        printf("%s\n", couleur[i]+1);
    }
    // Affichage des couleurs en majuscule
    for(int i = 0; couleur[i] != NULL; i++){
        for(int j = 0; couleur[i][j] != '\0'; j++){
            printf("%c", couleur[i][j] + ('A' - 'a'));
        }
        printf("\n");
    } 
    //afficher les couleurs sans utiliser %s
    for(int i = 0; couleur[i] != NULL; i++){
        printf(couleur[i]);
        printf("\n");
    }
}