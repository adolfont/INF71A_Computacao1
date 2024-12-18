#include <stdio.h>

int main() {
    char nome[16];


    printf("Digite seu nome: ");

    // teste com Constantinopolitano e Adolfo Gustavo
    scanf("%s", nome);

    for(int i=0; nome[i] != '\0'; i++)
       printf("%c\n", nome[i]);

    return 0;  // Indica execução bem-sucedida
}
