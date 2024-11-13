#include <stdio.h>

int soma(int a, int b)
{
    return a+b;
}

int main()
{
    int num1, num2;
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um número: ");
    scanf("%d", &num2);

    printf("A soma dos números %d e %d é %d\n",num1, num2, soma(num1,num2));
    printf("A soma dos números -%d e -%d é %d\n",num1, num2, soma(-num1,-num2));
    return 0;
}
