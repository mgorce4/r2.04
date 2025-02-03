#include <stdio.h>
#include <string.h>

int main(void)
{
    /*char hello[]="Bonjour";
    char bye[11]="Au revoir";
    char nombres[9]="123456789";*/

    char hello[8]="Bonjour";
    char bye[11]="Au revoir";
    char nombres[10]="123456789";

    printf("hello: %s\n", hello);
    printf("nombre= %s\n", nombres);
    printf("nombre+7= %s\n", nombres+7);
    printf("bye= %s\n", bye);
}