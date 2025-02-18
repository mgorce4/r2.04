#include <stdio.h>

void main(int argc, char *argv[]){
    

    //comparer les deux arguments en plus du nom du programme et afficher s'ils sont identiques
    if(argc == 3){
        while(*argv[1] != '\0' && *argv[2] != '\0'){
            if(*argv[1] != *argv[2]){
                printf("Les arguments ne sont pas identiques\n");
                return 1;
            }
            argv[1]++;
            argv[2]++;
        }
        if(*argv[1] == '\0' && *argv[2] == '\0'){
            printf("Les arguments sont identiques\n");
        }
        else{
            printf("Les arguments ne sont pas identiques\n");
        }
    }
    else{
        printf("Il faut exactement 2 arguments\n");
    }
}