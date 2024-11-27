#include <stdio.h>

#define TAMANHO 5


int esta_no_vetor(int valor, int* vetor, int fim)
{
    int flag = 0, i;

    for(i=0; i<fim; i++)
        if (vetor[i]==valor)
            flag = 1;

    return flag;
}

int main()
{

    int valores[TAMANHO];

    int i;

    for(i=0; i<3; i++)
    {
        valores[i]= i+1;
    }

    for(i=3; i<TAMANHO; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &valores[i]);
        while(esta_no_vetor(valores[i], valores, i))
        while(esta_no_vetor(valores[i], valores, i))
        {
            printf("Este valor já está no vetor! Digite de novo!\n");
            printf("Digite o valor %d do vetor: ", i);
            scanf("%d", &valores[i]);
        }

    }

    for(i=0; i<TAMANHO; i++)
    {
        printf("valores[%d] = %d\n", i, valores[i]);
    }

}

