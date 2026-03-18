#include<stdio.h>


void trocaNota(int* nota1, int* nota2)
{

    int aux;

    aux = *nota1;
    *nota1 = *nota2;
    *nota2 = aux;

}

int main()
{

    int nota1 = 8;
    int nota2 = 4;

    float media = ((nota1*4)+(nota2*6))/10;
    printf("A média de %d e %d é %.2f\n\n", nota1, nota2, media);

    trocaNota(&nota1, &nota2);
    media = ((nota1*4)+(nota2*6))/10;

    printf("A média de %d e %d é %.2f\n", nota1, nota2, media);

};
