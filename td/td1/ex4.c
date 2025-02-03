#include<stdio.h>
/*void permut(int a, int b)
{
    int c;
    c=a;
    a=b;
    b=c;
}*/
void permut(int *p1, int *p2)
{
    int c;
    c=(*p1);
    (*p1)=(*p2);
    (*p2)=c;
}

int main(void)
{
    int n1 = 5;
    int n2 = 8;
    printf("Avant permutation : n1=%d, n2=%d\n", n1, n2);
    /*permut(n1,n2)*/
    permut(&n1,&n2);
    printf("Après permutation : n1=%d, n2=%d\n", n1, n2);
    return 0;
}