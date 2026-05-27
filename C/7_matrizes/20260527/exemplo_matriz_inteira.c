#include <stdio.h>

int main()
{

    int numeros[2][5];

    for(int j=0; j<2; j++)
    {
        for(int i = 0; i<5; i++)
        {
            numeros[j][i] = j*2+i*3;
        }
    }


    for(int j=0; j<2; j++)
    {
        for(int i = 0; i<5; i++)
        {
            printf("numeros[%d][%d] = %d\n", j, i, numeros[j][i]);
        }
    }

    printf("\n");

    printf("  | ");
    for(int i = 0; i<5; i++)
    {
        printf("%2d ", i);
    }
    printf("\n");
    printf("------------------\n");


    for(int j=0; j<2; j++)
    {
        printf("%d | ", j);
        for(int i = 0; i<5; i++)
        {
            printf("%2d ", numeros[j][i]);
        }
        printf("\n");
    }

    return 0;
}
