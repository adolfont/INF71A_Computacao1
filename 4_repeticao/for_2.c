#include <stdio.h>
#include <math.h>

int main()
{
    // Pedro Herrmann

    double base = 2.0;
    double expoente = 300.0;
    double resultado = pow(base, expoente);
    printf("%.2f elevado a %.2f dá %.2f\n", base, expoente, resultado);


    for (int i = 2; i<=1024; i = i*2 ){
        printf("O número é %d\n", i);
    }
    for (int i = 1; i<=10; i = i+1 ){
        printf("O número é %.f\n", pow (2,i));
    }

    return 0;
}
