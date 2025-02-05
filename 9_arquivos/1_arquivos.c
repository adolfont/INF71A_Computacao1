#include<stdio.h>

void main()
{

    FILE*  f;

//    f = fopen("/home/adolfo/Downloads/lixodepois/explicacao_arquivo_openai.md", "r");
    f = fopen("1_arquivos.c", "r");

    if (f == NULL)
    {
        printf("Deu erro! Arquivo não encontrado!");

    }
    else
    {
        printf("Deu certo! Arquivo aberto!\n");
        int resultado_fechamento = fclose(f);

        if (resultado_fechamento == 0)
        {
            printf("Deu certo! Arquivo fechado!");
        }
        else
        {
            printf("Deu erro! Arquivo não fechado!");
        }

    }
}
