#include<stdio.h>

void main()
{

    FILE*  f;

    f = fopen("arquivo_criado.txt", "w+");

    if (f!=NULL)
    {
        fprintf(f, "%s", "Computação 2\n");
        for(int i=1; i<=12; i++)
            fprintf(f, "%2d/%d\n", i, 2025);
        fclose(f);

        printf ("Dados escritos no arquivo com sucesso!\n");
    }
    else
    {
        printf("Erro ao criar o aqruivo.");
    }
}
