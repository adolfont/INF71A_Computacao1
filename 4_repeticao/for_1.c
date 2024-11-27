#include <stdio.h>
#include <math.h>

int main()
{

//    int i, j, k;
//    i = 10;
//    j = i++;
//    k = --i;

//    printf("i = %d, j = %d, k = %d\n", i, j, k);

    double base = 2.0;
    double expoente = 300.0;
    double resultado = pow(base, expoente);
    printf("%.2f elevado a %.2f dá %.2f\n", base, expoente, resultado);

//    for (int i = 1; i <= 10; i++) {
//        printf("%d\n", i);
//    }

    for (int i = 100; i>=10; i = i - 10){
        printf("O número é %d\n", i);
    }

    return 0;
}
