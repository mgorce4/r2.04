#include <stdio.h>

int main(void)
{
    short int tab[10];
    int i;
    printf("entrez 10 entiers courts dans le tableau : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%hd", &tab[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("tab[%d] = %hd\n", i, tab[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("l'adresse de tab[%d] est %p\n", i, &tab[i]);
    }
}