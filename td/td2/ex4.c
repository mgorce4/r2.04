#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    void *p;
    int i;

    for (i=0;i<500000;i++)
    {
        p=malloc(0x80000000);
        printf("p=%p\n",p);
        if(p==0)
        {
            printf("Malloc renvoie 0 !!Erreur !");
            exit(1);
        }
        free (p);
    }
}