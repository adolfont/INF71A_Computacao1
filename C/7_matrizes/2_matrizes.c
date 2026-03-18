#define LINHAS 3
#define COLUNAS 4

int main()
{

    int escaninho[LINHAS][COLUNAS];
    int i, j;

//    escaninho[2][3] = 10;
//
//    printf("escaninho[%d,%d] = %d\n",2, 3, escaninho[2][3] );
//
//    escaninho[4][6] = 100;
//
//    printf("escaninho[%d,%d] = %d\n",4, 6, escaninho[4][6] );
//    printf("escaninho[%d,%d] = %d\n",3, 3, escaninho[3][3] );

//    COMPLEMENTE ESTE PROGRAMA PARA QUE ELE LEIA DO TECLADO TODOS OS VALORES DA MATRIZ
    for(i=0; i<LINHAS; i++)
        for(j=0; j<COLUNAS; j++)
        {
            printf("Digite o valor de escaninho[%d][%d]: ", i, j);
            scanf("%d", &escaninho[i][j]);
        }


//
//    DEPOIS, MULTIPLIQUE TODOS OS VALORES DA MATRIZ POR 2
    for(i=0; i<LINHAS; i++)
        for(j=0; j<COLUNAS; j++)
        {
            escaninho[i][j]*=2;
        }

//
//    EXIBA TODA A MATRIZ

    for(i=0; i<LINHAS; i++)
    {
        printf("Linha %2d: |", i);
        for(j=0; j<COLUNAS; j++)
        {
            printf("%3d | ", escaninho[i][j]);
        }
        printf("\n");
    }
}
