#include <stdio.h>

int main() {
    char nome[16];


    printf("Digite seu nome: ");

    // teste com Constantinopolitano e Adolfo Gustavo
    fgets(nome, 15, stdin);

    for(int i=0; nome[i] != '\0'; i++)
       printf("%c\n", nome[i]);

    fgets(nome, 15, stdin);
    printf("%s\n", nome);

    return 0;  // Indica execução bem-sucedida
}
