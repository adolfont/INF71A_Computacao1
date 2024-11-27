#include <stdio.h>
#include <math.h>

void raizes(int x, float *raiz1, float *raiz2)
{
    *raiz1 = -sqrt(x);
    *raiz2 = sqrt(x);
}

int main()
{
// leia o valor de x, em vez de atribuir 25
    int x = 25;
    float r1 = 1000.08;
    float r2;

    raizes(x, &r1, &r2);

    printf("As raízes quadradas de %d são %.2f e %.2f\n", x, r1, r2);

    return 0;
}
