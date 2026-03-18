#include <stdio.h>

void muda(int* x)
{
    *x = 11;
    printf("x = %d\n", *x);

}

int main()
{
    int x = 10;

    printf("x = %d\n", x);

    muda(&x);

    printf("x = %d\n", x);

}
