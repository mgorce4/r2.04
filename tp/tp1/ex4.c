#include <stdio.h>

void main(void){
    char str[81]="ABCDEF";
    char *p;

    p = str;

    *p = 'X';
    p++;
    *p = 'Y';
    *(p+2) = 'Z';
    printf("%s\n", str);
    printf("%s\n", &str[1]);

    printf("%s\n", p);
    printf("%s\n", p+1);
    printf("%s\n", p-1);
    printf("%d\n", p-str);
}