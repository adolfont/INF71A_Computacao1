#include<stdio.h>
int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num%2 == 0)
        printf("O número '%d' é par.\n", num);

    if (num%2 == 1)
        printf("O número '%d' é impar.\n", num);

    printf("Tchau!\n");
    return 0;
}
