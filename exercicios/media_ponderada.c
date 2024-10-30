#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    const int peso1 = 2;
    const int peso2 = 3;
    const int peso3 = 5;
    
    printf("Digite o primeiro numero: ");
    if (scanf("%f", &n1) != 1) {
        printf("Erro: Digite apenas numeros validos!\n");
        return 1;
    }
    
    printf("Digite o segundo numero: ");
    if (scanf("%f", &n2) != 1) {
        printf("Erro: Digite apenas numeros validos!\n");
        return 1;
    }
    
    printf("Digite o terceiro numero: ");
    if (scanf("%f", &n3) != 1) {
        printf("Erro: Digite apenas numeros validos!\n");
        return 1;
    }
    
    // Calcula a média ponderada
    media = (n1 * peso1 + n2 * peso2 + n3 * peso3) / (peso1 + peso2 + peso3);
    
    // Verifica e exibe a situação
    if (media > 7) {
        printf("Media: %.2f - Situacao: Aprovado\n", media);
    } else if (media > 5) {
        printf("Media: %.2f - Situacao: Em Recuperacao\n", media);
    } else {
        printf("Media: %.2f - Situacao: Reprovado\n", media);
    }
    
    return 0;
}
