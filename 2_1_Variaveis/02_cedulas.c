#include <stdio.h>
int main()
{


    printf("Notas de R$50: %d\n", 218 / 50);
    printf("Notas de R$5: %d\n", 218 % 50 / 5);
    printf("Notas de R$1: %d\n", 218 % 50 % 5);

    return 0;
}

