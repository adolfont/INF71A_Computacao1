#include <stdio.h>

int main(void)
{
//    int codigo=1, codigo2=1;
//    float média = 7.7;
//    printf("%f\n", média);
//
//
//    printf("O codigo é %d\n", codigo);
//    printf("O codigo2 é %d\n", codigo2);

    float   valor = 6.0;
    float   fatorial = 6*5*4*3*2*1.0,
            dividendo  = valor * 2;


    printf("A divisão de %f! (que é %.f) por %f resulta em %.4f\n", valor, fatorial, dividendo,
           fatorial/dividendo);

    return 0;
}

