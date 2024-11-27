#include <stdio.h>
int main()
{
    char nome[100];
    char sobrenome[100];

    printf("Digite seu nome: ");
    scanf("%99s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%99s", sobrenome);

    printf("O nome que você digitou foi '%s %s'\n", nome, sobrenome);
    return 0;
}
