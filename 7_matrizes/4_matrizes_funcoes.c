#define LINHAS 2
#define COLUNAS 2

void imprime_matriz(int m[LINHAS][COLUNAS])
{
    int i,j;
    for(i=0; i<LINHAS; i++)
    {
        printf("Linha %2d: |", i);
        for(j=0; j<COLUNAS; j++)
        {
            printf("%3d | ", m[i][j]);
        }
        printf("\n");
    }
}

void multiplica(int m[LINHAS][COLUNAS], int n[LINHAS][COLUNAS],  int x)
{
    int i,j;

    for(i=0; i<LINHAS; i++)
        for(j=0; j<COLUNAS; j++)
        {
            n[i][j]=m[i][j]*x;
        }
}

void le_matriz(int m[LINHAS][COLUNAS]){

    int i, j;

    for(i=0; i<LINHAS; i++)
        for(j=0; j<COLUNAS; j++)
        {
            printf("Digite o valor da matriz na posição [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
}

int main()
{

    int escaninho[LINHAS][COLUNAS], copia[LINHAS][COLUNAS];

    le_matriz(escaninho);

    imprime_matriz(escaninho);

    printf("Multiplicando a matriz por 3...\n");

    multiplica(escaninho, copia, 3);

    imprime_matriz(copia);

    printf("Multiplicando a matriz por 5...\n");

    multiplica(escaninho, copia, 5);

    imprime_matriz(copia);

}
