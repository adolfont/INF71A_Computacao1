#include <stdio.h>
#include <string.h>  // Incluída para operações com strings, se necessário

int main() {
    char nome[201];  // Espaço suficiente para armazenar até 10 caracteres + o terminador nulo '\0'

    strcpy(nome, "Maximiliano Constantino Albuquerque de Souza Monteiro da Silva Oliveira Pereira Costa Fernandes Albuquerque Filho Neto da Cunha Moreira Machado Alves Rodrigues Santos Barros Carvalho Borges Lima");  // Usa a função strcpy para copiar a string para o array

    printf("Nome: %s\n", nome);  // Corrige para printf e adiciona uma nova linha

    return 0;  // Indica execução bem-sucedida
}
