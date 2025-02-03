#include <stdio.h>
int fct(int n)
{
    int res=0;
    if (n==0)
    {
        return 0;
    }
    else
    {
        res=1+fct(n-1);
        return res+n;
    }
}
int main(void)
{
    int resu;
    /*resu=fct(10);
    resu=fct(1000);*/
    resu=fct(1000000);
    printf("resultat=%d\n", resu);
}
