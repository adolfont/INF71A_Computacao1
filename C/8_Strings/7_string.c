#include <stdio.h>

int main() {
    char opcao;

    printf("Digite sua opção (S para Sim, N para Não): ");

    opcao = getchar();

    while(opcao != 'S' && opcao != 'N'){
        printf("Precisa ser S ou N\n");
        while (getchar() != '\n');
        printf("Digite sua opção (S para Sim, N para Não): ");
        opcao = getchar();
    }
    printf("A sua opção foi '%c'\n", opcao);

    return 0;  // Indica execução bem-sucedida
}
