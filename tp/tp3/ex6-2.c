#include <stdio.h>


char majuscule(char p){
    if(p >= 'a' && p <= 'z'){
        return p + ('A' - 'a');
    }
    return p;
}
void mettre_majuscule(char *p){
    int i;
    for(i=0; p[i] != '\0'; i++){
        p[i] = majuscule(p[i]);
    }
}

void main(int argc, char *argv[]){
    int i;

    //imprimer les arguments dans le sens inverse
    if (*argv[1] == '-'){
        if (argv[1][1] == 'r'){
            for(i=argc-1;i>1;i--){
                printf("%s\n",argv[i]);
            }
        }
        
        //mettre les arguments en majuscule
        if (argv[1][1] == 'M'){
            for(i=2;i<argc;i++){
                mettre_majuscule(argv[i]);
                printf("%s\n",argv[i]);
            }
        }
        
        //mettre la premiere lettre en majuscule
        if (argv[1][1] == 'm'){
            for(i=2;i<argc;i++){
                if(argv[i][0] >= 'a' && argv[i][0] <= 'z'){
                    argv[i][0] = majuscule(argv[i][0]);
                }
                printf("%s\n",argv[i]);
            }
        }
    }
    else{
        for(i=1;i<argc;i++){
            printf("%s\n",argv[i]);
        }
    }
}