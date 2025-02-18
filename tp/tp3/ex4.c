#include <stdio.h>

void main(int argc, char *argv[]){
    int i;

    printf("nb arguments = %d\n", argc);

    for(i=argc-1; i>0;i--){
        printf("%s\n",argv[i]);
    }
}