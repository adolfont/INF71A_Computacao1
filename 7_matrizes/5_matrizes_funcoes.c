#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 5

void preencher_matriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matriz[i][j] = rand() % 100; // Gera números aleatórios de 0 a 99
        }
    }
}

void imprimir_matriz(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void calcular_transposta(int matriz[TAMANHO][TAMANHO], int transposta[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

int main() {
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Declaração das matrizes
    int matriz[TAMANHO][TAMANHO];
    int transposta[TAMANHO][TAMANHO];

    // Preenche a matriz com valores aleatórios
    preencher_matriz(matriz);

    // Imprime a matriz original
    printf("Matriz Original:\n");
    imprimir_matriz(matriz);

    // Calcula a transposta
    calcular_transposta(matriz, transposta);

    // Imprime a matriz transposta
    printf("\nMatriz Transposta:\n");
    imprimir_matriz(transposta);

    return 0;
}
