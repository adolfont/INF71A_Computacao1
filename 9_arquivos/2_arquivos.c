#include<stdio.h>

void main()
{

    FILE*  f;

    f = fopen("teste.txt", "r");

    char nome [100];

    for (int i = 1; i<=10; i++)
    {

        int resultado = fscanf(f, "%s", nome);

        if (resultado != EOF)
            printf("%s\n", nome);
    }

    char nome2 [100] = "VAZIO";

    fscanf(f, "%s", nome2);

    printf("%s\n", nome2);

    fclose(f);

}
