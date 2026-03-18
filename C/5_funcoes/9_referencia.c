#include<stdio.h>

void dec_inc(int* a, int*b)
{
    *a = *a -1;
    *b = *b +1;
}

int main()
{

    int x, y;

    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("Digite outro valor: ");
    scanf("%d", &y);

    dec_inc(&x, &y);

    printf("Os valores agora são %d e %d!", x, y);

    return 0;
}
