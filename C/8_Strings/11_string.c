#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    char nome[9];

    printf("Digite um nome com até 8 letras: ");
    scanf("%8s", &nome);

    printf("O nome é '%s'!", nome);

    return 0;
}
