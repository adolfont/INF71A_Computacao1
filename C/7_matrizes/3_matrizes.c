#include<stdio.h>
#include<time.h>

#define LINHAS 6
#define COLUNAS 4

void main()
{
    int matriz[LINHAS][COLUNAS];
    int i,j;

//    srand(time(NULL));   // Initialization, should only be called once.
    srand(10);

    for(i=0; i<LINHAS; i++)
    {
        for(j=0; j<COLUNAS; j++)
            matriz[i][j]=rand()%1000;
    }

    for(i=0; i<LINHAS; i++)
    {
        for(j=0; j<COLUNAS; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }

}
