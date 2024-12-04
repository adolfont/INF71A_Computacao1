/*
Implemente um programa em C que preenche um vetor de N posições com valores aleatórios.
O usuário deve informar a posição de um elemento a ser removido.
Ao remover o elemento, o programa deve "puxar" os elementos subsequentes para preencher o espaço,
usando apenas o vetor original. Após a remoção, o programa exibe o novo vetor.
A posição informada deve ser válida para o tamanho do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

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

int main()
{
    int vetor[N];
    srand(time(NULL)); // Inicializa a semente para a geração de números aleatórios

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

    return 0;
}

