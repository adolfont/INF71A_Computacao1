#include <stdio.h>
#include <math.h>

void raizes(int x, float *raiz1, float *raiz2)
{
    *raiz1 = -sqrt(x);
    *raiz2 = sqrt(x);
}

int main()
{
    int x;
    float r1 = 1000.08;
    float r2;

    printf("Digite um valor inteiro: ");
    scanf ("%d", &x);

    raizes(x, &r1, &r2);

    printf("As raízes quadradas de %d são %.2f e %.2f\n", x, r1, r2);

    return 0;
}
