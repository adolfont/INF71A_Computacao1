#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

// Luiza Lourenço

void preencherVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 100; // Preenche com valores aleatórios entre 0 e 99
    }
}

void exibirVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void removerElemento(int *vetor, int tamanho, int posicao)
{
    if (posicao < 0 || posicao >= tamanho)
    {
        printf("Posição inválida.\n");
        return;
    }

    for (int i = posicao; i < tamanho - 1; i++)
    {
        vetor[i] = vetor[i + 1];
    }
}


void triplicar_vetor (int * vetor)
{
    for (int i = 0; i < N; i++)
    {
        vetor[i] = vetor[i] * 3;
    }

}
int main()
{
    int vetor[N];
    srand(time(NULL));

    preencherVetor(vetor, N);
    printf("Vetor original:\n");
    exibirVetor(vetor, N);

    int posicao;
    printf("Informe a posição do elemento a ser removido (0 a %d): ", N - 1);
    scanf("%d", &posicao);
    while (posicao < 0 || posicao >= N)
    {
        printf("Posição inválida. A posição deve estar entre 0 e %d.\n", N - 1);
        printf("Informe a posição do elemento a ser removido (0 a %d): ", N - 1);
        scanf("%d", &posicao);
    }

    removerElemento(vetor, N, posicao);
    printf("Vetor após a remoção:\n");
    exibirVetor(vetor, N);

    triplicar_vetor(vetor);
    printf("Vetor após a multiplicação por 3:\n");
    exibirVetor (vetor, N);

    return 0;
}

