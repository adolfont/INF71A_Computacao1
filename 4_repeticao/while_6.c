#include <stdio.h>
int main ()
{
    float foo;

// Repete enquanto digitar valores positivos.
    printf("Digite um número positivo (ou digite negativo ou 0 caso queira sair): ");
    scanf("%f", &foo);
    printf ("O número digitado foi %f\n", foo);
    while (foo > 0)
    {
        printf("Digite um número positivo (e digite negativo ou 0 caso queira sair): ");
        scanf ("%f", &foo);
    }
    printf("Fim da execução!");
    return 0;
}

