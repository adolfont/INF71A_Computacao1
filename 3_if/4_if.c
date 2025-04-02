#include<stdio.h>
int main()
{
    int numero1, numero2;

    printf("Digite dois números inteiros, separados por espaços: ");
    scanf("%d %d", &numero1, &numero2);

    if (numero1>10 && numero2>5){
      printf("numero1-numero2 = %d\n", numero1-numero2);
    }
    else{
      printf("numero1+numero2 = %d\n", numero1+numero2);
    }


    printf("Tchau!\n");
    return 0;
}
