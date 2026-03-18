/* Dizemos que uma matriz quadrada inteira é um "quadrado equilibrado" se a soma da primeira linha
for igual à soma da última linha, a soma da primeira coluna for igual à soma da última coluna,
e a soma da diagonal principal for igual à soma da diagonal secundária.

Escreva um programa que diz se uma matriz de ordem 4, com valores recebidos pelo teclado,
é um quadrado equilibrado.


1 2 2 1
3 4 4 3
3 4 4 3
1 2 2 1

É quadrado equilibrado

Soma da primeira linha: 1 + 2 + 2 + 1 = 6
Soma da última linha: 1 + 2 + 2 + 1 = 6

Soma da primeira coluna: 1 + 3 + 3 + 1 = 8
Soma da última coluna: 1 + 3 + 3 + 1 = 8

Soma da diagonal principal: 1 + 4 + 4 + 1 = 10
Soma da diagonal secundária: 1 + 4 + 4 + 1 = 10


 5   8   3   4
12   6   7   5
 9   1  10   2
 4   7   5  14

Não é quadrado equilibrado.
Verificação:

Primeira linha: 5 + 8 + 3 + 4 = 20
Última linha: 4 + 7 + 5 + 14 = 30
Primeira coluna: 5 + 12 + 9 + 4 = 30
Última coluna: 4 + 5 + 2 + 14 = 25
Diagonal principal: 5 + 6 + 10 + 14 = 35
Diagonal secundária: 4 + 1 + 7 + 4 = 16
*/

#include<stdio.h>
#define TAMANHO 4

void le_matriz(int matriz[TAMANHO][TAMANHO], int tam)
{

    for(int i =0; i<tam; i++)
        for(int j =0; j<tam; j++)
        {
            printf("Digite o valor na posição (%d, %d) da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
}

int soma_linha(int matriz[TAMANHO][TAMANHO], int tam, int linha)
{
    int soma = 0;
    for(int i =0; i<tam; i++)
    {
        soma = soma + matriz[linha][i];
    }
    return soma;
}


int soma_coluna(int matriz[TAMANHO][TAMANHO], int tam, int coluna)
{
    int soma = 0;
    for(int i =0; i<tam; i++)
    {
        soma = soma + matriz[i][coluna];
    }
    return soma;
}

int soma_diagonal_principal(int matriz[TAMANHO][TAMANHO], int tam)
{
    int soma = 0;
    for(int i =0; i<tam; i++)
    {
        soma = soma + matriz[i][i];
    }
    return soma;
}

int soma_diagonal_secundaria(int matriz[TAMANHO][TAMANHO], int tam)
{
    int soma = 0;
    for(int i =0; i<tam; i++)
    {
        soma = soma + matriz[tam-i-1][i];
    }
    return soma;
}

int eh_quadrado_equilibrado(int matriz[TAMANHO][TAMANHO], int tam)
{

    return
        soma_linha(matriz, TAMANHO, 0)== soma_linha(matriz, TAMANHO, TAMANHO-1)
        &&
        soma_coluna(matriz, TAMANHO, 0)==soma_coluna(matriz, TAMANHO, TAMANHO-1)
        &&
        soma_diagonal_principal(matriz, TAMANHO)== soma_diagonal_secundaria(matriz, TAMANHO);
}

void imprime_matriz(int matriz[TAMANHO][TAMANHO], int tam)
{

    for(int i =0; i<tam; i++)
    {
        for(int j =0; j<tam; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }
}




void main()
{

    int matriz[TAMANHO][TAMANHO];
    int somaPrimeiraLinha = 0;

    le_matriz(matriz, TAMANHO);
    imprime_matriz(matriz, TAMANHO);

    printf("Soma da primeira linha: %d \n", soma_linha(matriz, TAMANHO, 0));
    printf("Soma da ultima linha: %d \n", soma_linha(matriz, TAMANHO, TAMANHO-1));
    printf("Soma da primeira coluna: %d \n", soma_coluna(matriz, TAMANHO, 0));
    printf("Soma da ultima coluna: %d \n", soma_coluna(matriz, TAMANHO, TAMANHO-1));
    printf("Soma da diagonal principal: %d \n", soma_diagonal_principal(matriz, TAMANHO));
    printf("Soma da diagonal secundária: %d \n", soma_diagonal_secundaria(matriz, TAMANHO));

    if (eh_quadrado_equilibrado(matriz, TAMANHO))
    {
        printf("É quadrado equilibrado!!!");
    }
    else
    {
        printf("Não é quadrado equilibrado!!!");
    }
}
