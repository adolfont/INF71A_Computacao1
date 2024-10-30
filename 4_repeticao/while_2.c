#include <stdio.h>

int main(){

 int i = 1;
 int num;

 while(i<=10){
    printf("Digite um numero (ordem %d): ", i);
    scanf("%d", &num);
    printf("O número digitado foi %d\n", num);
    i = i + 1;
 }



 return 0;
}
