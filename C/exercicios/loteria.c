#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int contagem_de_acertos(int primeiro_numero, int segundo_numero, int terceiro_numero, int aposta1, int aposta2, int aposta3)
{

    int numero_de_acertos = 0;

    if (primeiro_numero == aposta1 || primeiro_numero == aposta2 || primeiro_numero == aposta3)
    {
        //   printf("Você acertou! %d é um dos números sorteados!\n", primeiro_numero);
        numero_de_acertos++;
    }

    if (segundo_numero == aposta1 || segundo_numero == aposta2 || segundo_numero == aposta3)
    {
        // printf("Você acertou! %d é um dos números sorteados!\n", segundo_numero);
        numero_de_acertos++;
    }

    if (terceiro_numero == aposta1 || terceiro_numero == aposta2 || terceiro_numero == aposta3)
    {
        // printf("Você acertou! %d é um dos número(s) sorteados!\n", terceiro_numero);
        numero_de_acertos++;
    }
    return numero_de_acertos;
}

void sorteia_numeros(int *pn, int *sn, int *tn)
{

    *pn = rand()%20+1;
    *sn = rand()%20+1;

    while (*sn == *pn)
        *sn = rand()%20+1;

    *tn = rand()%20+1;
    while(*tn == *pn || *tn == *sn)
        *tn = rand()%20+1;
}


int main()
{
    int primeiro_numero, segundo_numero, terceiro_numero;
    int aposta1, aposta2, aposta3;
    int numero_de_acertos;
    int tentativas;




    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    while(1)
    {
        tentativas = 0;
        sorteia_numeros(&primeiro_numero, &segundo_numero, &terceiro_numero);

//        printf("Resultado do sorteio: %d %d %d\n", primeiro_numero, segundo_numero, terceiro_numero);

        do
        {
            tentativas++;
            printf("Digite três números entre 1 e 20 (tentativa %d): ", tentativas);
            scanf("%d %d %d", &aposta1, &aposta2, &aposta3);

            numero_de_acertos = contagem_de_acertos(primeiro_numero, segundo_numero, terceiro_numero, aposta1, aposta2, aposta3);

            printf("Você acertou %d números na sua aposta!\n", numero_de_acertos);
        }
        while (numero_de_acertos !=3);

        printf("Você conseguiu em %d tentativa(s) e gastou %d reais\n", tentativas, tentativas);

        if (tentativas <= 5)
        {
            printf("Você é ÓTIMO!\n");
            break;
        }
        else if (tentativas <=10)
        {
            printf("Você é BOM!\n");
            break;
        }
        else if (tentativas <=12)
        {
            printf("Você é FRACO!\n");
        }
        else
        {
            printf("Você é PÉSSIMO!\n");
        }

        while ( getchar() != '\n' );
        char c;
        printf("Deseja continuar? (S/N):");
        scanf("%c", &c);
        if (c != 'S')
        {
            break;
        }


    }
    return 0;
}
