#include <stdio.h>
#include <string.h>
int main(){

    char nome[60];

    strcpy(nome,"Adolfo");

    printf("%s\n", nome);

    for(int i = 0; i<60; i++){
        printf("nome[%d] = %c %d\n", i, nome[i], nome[i]);
    }


    return 0;
}
