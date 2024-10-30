#include <stdio.h>

#define TAMANHO 5

int main()
{

// Matheus Nizer Nymberg

    int i = 1;
    int num;
    int contador = 0;

    while(i<=TAMANHO)
    {
        printf("Digite um numero (ordem %d): ", i);
        scanf("%d", &num);
        printf("O número digitado foi %d\n", num);

        if (num % 2 ==  1 && num%3 == 0)
            contador = contador + 1;

        i = i + 1;
    }

    printf("A quantidade de números impares e divisiveis por 3 que você digitou foi %d\n", contador);

    return 0;
}
