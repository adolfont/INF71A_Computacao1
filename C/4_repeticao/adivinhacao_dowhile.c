#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));


    int numero_secreto = (rand()%10)+1;
    int chute;

    do
    {
//        printf("O número secreto é %d \n", numero_secreto);
        printf("Digite o número secreto: ");
        scanf("%d", &chute);

        if (chute>numero_secreto)
            printf("O número que você chutou é maior que o número secreto!\n");
        else if (chute<numero_secreto)
            printf("O número que você chutou é menor que o número secreto!\n");

    }
    while (chute != numero_secreto);
    printf("Parabéns, você acertou!");
}
