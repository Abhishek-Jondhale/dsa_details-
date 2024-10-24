#include <stdio.h>
int main()
{

    int a = 15;
    int *b = &a;
    int **p = &b;
    printf("%d \n", a);
    printf("%p \n", &a);
    printf("%d \n", b);
    printf("%p \n", &b);
    printf("%d \n", *b);
    printf("%d \n", p);
    printf("%d \n", **p);
    printf("%p \n", &p);
}