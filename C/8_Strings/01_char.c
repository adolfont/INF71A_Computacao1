#include <stdio.h>
#include <locale.h>
#include <conio.h>


int main()
{

    setlocale(LC_ALL, "Portuguese");

    char letra, letra2;

    printf("Digite uma letra: ");
    letra = getch();
    printf("\nA letra é %c\n", letra);

    printf("Digite outra letra: ");
    letra2 = getch();
    printf("\nA outra letra é %c\n", letra2);

    return 0;
}
