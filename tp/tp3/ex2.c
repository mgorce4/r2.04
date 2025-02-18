#include <stdio.h>

void main(void){

    char *p[6]={"ABC", "DEFGH","IJKLM","NOPQRS","TUV",NULL};
    int i;
    int j;

    for (i=0;p[i]!=NULL;i++){
        printf("%s\n",p[i]);
    }
    //imprimer chaque case de tableau dans l'ordre inverse
    for (i=4;i>=0;i--){
        printf("%s\n",p[i]);
    }
}
