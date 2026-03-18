#include <stdio.h>

int main() {
    FILE *arquivo;
    int numero;

    // 1. Criar o arquivo e escrever os números de 1 a 10
    arquivo = fopen("dados.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    for (numero = 1; numero <= 10; numero++) {
        fprintf(arquivo, "%d\n", numero);
    }

    fclose(arquivo);

    // 2. Abrir o arquivo para leitura e exibir o conteúdo
    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("Conteúdo inicial do arquivo:\n");
    while (fscanf(arquivo, "%d", &numero) != EOF) {
        printf("%d\n", numero);
    }

    fclose(arquivo);

    // 3. Abrir o arquivo para adicionar novos dados (números de 11 a 20)
    arquivo = fopen("dados.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para adição.\n");
        return 1;
    }

    for (numero = 11; numero <= 20; numero++) {
        fprintf(arquivo, "%d\n", numero);
    }

    fclose(arquivo);

    // 4. Abrir o arquivo para leitura e exibir o conteúdo atualizado
    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("\nConteúdo atualizado do arquivo:\n");
    while (fscanf(arquivo, "%d", &numero) != EOF) {
        printf("%d\n", numero);
    }

    fclose(arquivo);

    return 0;
}
