#include<stdio.h>
int main(void)
{
    int *p;
    int n;

    n=10;
    p=&n;

    printf("L'entier n vaut : %d, il est stocké à l'adresse : %x\n", *p, p);
    printf("L'adresse de n est : %x\n", &p);
    return 0;
}