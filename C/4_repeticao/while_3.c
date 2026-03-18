#include <stdio.h>

#define TAMANHO 5

int main(){

 int i = 1;
 int num;

 while(i<=TAMANHO){
    printf("Digite um numero (ordem %d): ", i);
    scanf("%d", &num);
    printf("O número digitado foi %d\n", num);
    i = i + 1;
 }

 return 0;
}
