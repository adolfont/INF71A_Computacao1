#include <stdio.h>
#include <string.h>
#include<conio.h>
int main(){

    char nome[60];

    printf("Digite seu nome: ");
    // scanf("%s", &nome);
    gets(nome);

    printf("%s\n", nome);

    for(int i = 0; i<60; i++){
        printf("nome[%d] = %c %d\n", i, nome[i], nome[i]);
    }


    return 0;
}
