#include <stdio.h>

#define TAMANHO 3

void muda(int vetor[], int tam)
{

    int i;

    for(i=0; i<tam; i++)
        vetor[i] = 3 * vetor[i];

}


int main()
{

    int valores[TAMANHO] = {1, 23, 45};

    muda(valores, TAMANHO);

    for(int i=0; i<TAMANHO; i++)
    {
        printf("%d ",valores[i]);
    }

    return 0;
}
