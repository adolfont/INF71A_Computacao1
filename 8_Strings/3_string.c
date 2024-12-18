#include <stdio.h>
#include <string.h>  // Incluída para operações com strings, se necessário

int main() {
    char nome[11];  // Espaço suficiente para armazenar até 10 caracteres + o terminador nulo '\0'

    nome[0]= 65;
    nome[1]= 100;
    nome[2]= 111;
    nome[3]= 108;
    nome[4]= 102;
    nome[5]= 111;
    nome[6]= 0;

    printf("Nome: %s\n", nome);  // Corrige para printf e adiciona uma nova linha

    return 0;  // Indica execução bem-sucedida
}
