#include <stdio.h>

void main(void){

    char *jour[8]= {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche", NULL};
    int i;
    int j;
    //imprimer chaque jour dans l'ordre en utilisant %s
    for(i = 0; jour[i] != NULL; i++){
        printf("%s\n", jour[i]);
    }
    //imprimer chaque jour dans l'ordre en utilisant %c
    for(i = 0; jour[i] != NULL; i++){
        for(j = 0; jour[i][j] != '\0'; j++){
            printf("%c", jour[i][j]);
        }
        printf("\n");
    }
    //imprimer chaque jour dans l'ordre inverse en utilisant %s
    for(i = 6; i >= 0; i--){
        printf("%s\n", jour[i]);
    }
    //permuter les pointeurs du tableau 1er jour devient le dernier et le dernier devient le premier etc...)
    char *temp;
    for(i = 0; i < 4; i++){
        temp = jour[i];
        jour[i] = jour[6-i];
        jour[6-i] = temp;
    }
    //imprimer chaque jour dans l'ordre en majuscule sans les modifier dans le tableau
    for(i = 0; jour[i] != NULL; i++){
        for(j = 0; jour[i][j] != '\0'; j++){
            printf("%c", jour[i][j]-('a'-'A'));
        }
        printf("\n");
    }
    for(i = 0; jour[i] != NULL; i++){
        printf("%s\n", jour[i]);
    }
}