#include <stdio.h>
int main(void)
{
    int tab[10];
    int n = 5;

    for (int i=0; i<10;i++)
    {
        tab[i]=n++;
    }
    printf("tab(1000)=%d\n", tab[1000]);
}