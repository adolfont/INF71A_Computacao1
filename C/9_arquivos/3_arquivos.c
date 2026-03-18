#include<stdio.h>

void main()
{

    FILE*  f;

    f = fopen("nomes.txt", "r");

    char nome [100];

    while (fgets(nome, 100, f)!= NULL)
    {
        printf("%s", nome);
    }


    fclose(f);

}
