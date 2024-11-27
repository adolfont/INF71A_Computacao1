#include <stdio.h>

#define TAMANHO 5

int main()
{

    int i = 1;
    int num;
    int contPares = 0;

    while(i<=TAMANHO)
    {
        printf("Digite um numero (ordem %d): ", i);
        scanf("%d", &num);
        printf("O número digitado foi %d\n", num);

        if (num % 2 == 0)
            contPares = contPares + 1;

        i = i + 1;
    }

    printf("A quantidade de números pares que você digitou foi %d\n", contPares);

    return 0;
}
