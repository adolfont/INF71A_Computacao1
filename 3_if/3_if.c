#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3,
          media;
    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;
    if (media >= 6)
    {
        printf("Aprovado(a).\n");
        printf("Parabéns!!!\n");
    }
    else{
        printf("Parabéns!!! Você está em recuperação!\n");
    }

    printf("Tchau!\n");
    return 0;
}