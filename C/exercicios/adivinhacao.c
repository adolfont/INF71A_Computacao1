#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    int numero_secreto;
    int chute;
    int qtd_tentativas;
    int continua = 1;

    while(continua)
    {
        qtd_tentativas = 1;
        numero_secreto = (rand()%20)+1;
        do
        {

            printf("O número secreto é %d \n", numero_secreto);
            printf("Digite o número secreto: ");
            scanf("%d", &chute);

            if (chute!=numero_secreto)
                qtd_tentativas = qtd_tentativas + 1;

        }
        while (chute != numero_secreto);

        printf("Quantidade de tentativas: %d\n", qtd_tentativas);


        if(qtd_tentativas <= 3)
        {
            printf("Você é ÓTIMO!\n");
            continua = 0;
        }
        else if(qtd_tentativas <= 6)
        {
            printf("Você é BOM!\n");
            continua = 0;

        }
        else if(qtd_tentativas <=10)
        {
            printf("Você é FRACO!\n");

        }
        else
        {
            printf("Você é PÉSSIMO!!!\n");

        }
    }

    return 0;


}
