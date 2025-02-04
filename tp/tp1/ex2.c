#include <stdio.h>

int main(void){

    int a;
    int b;

    printf("Saisir un nombre entier : ");
    scanf("%d", &a);
    printf("Saisir un autre nombre entier : ");
    scanf("%d", &b);

    if (a > b){
        printf("%d est plus grand que %d\n", a, b);
    } else if (a < b){
        printf("%d est plus petit que %d\n", a, b);
    } else {
        printf("%d est égal à %d\n", a, b);
    }
}