#include<stdio.h>

void main()
{
    FILE*  arquivo = fopen("arquivo_criado.txt", "a+");
    char linha [100];
    if (arquivo!=NULL)
    {

        while (fgets(linha, 100, arquivo)!= NULL)
        {
            printf("%s", linha);
        }

        fprintf(arquivo, "%s", "Computação 3\n");


        fclose(arquivo);

        printf ("Finalizado com sucesso!\n");
    }
    else
    {
        printf("Erro ao ler o aqruivo.");
    }
}



