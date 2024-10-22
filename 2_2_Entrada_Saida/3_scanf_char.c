#include <stdio.h>
int main()
{
    char nome[100];

    printf("Digite seu nome: ");
    scanf("%99s", nome);

    printf("O nome que você digitou foi '%s'\n", nome);
    return 0;
}