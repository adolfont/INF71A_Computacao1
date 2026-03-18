#include<stdio.h>

void main()
{

    FILE*  f;
    int caracter;

    f = fopen("nomes.txt", "r");

    if (f!=NULL)
    {
        caracter = fgetc(f);
        while (caracter!= EOF)
        {
            putchar(caracter);
            caracter = fgetc(f);
//            putchar('-');
        }
        fclose(f);
    }
    else
    {
        printf("Erro ao abrir o aqruivo");
    }
}
