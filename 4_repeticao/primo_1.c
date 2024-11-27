#include <stdio.h>

int main()
{
    int div, candidato, eh_primo, nPrimos;
    printf("Qual numero testar? ");
    scanf("%d", &candidato);
    eh_primo = 1;
    for (div=2; div<=(candidato/2) && eh_primo != 0; div++)
    {
        printf("Dividindo %d por %d...\n", candidato, div);
        if (candidato%div == 0)
            eh_primo = 0; // se teve divisor, altera flag, pois não é primo

        if (eh_primo == 0)
            printf("%d não é primo\n", candidato);

    }
    if(eh_primo==1)
        printf("%d é primo ", candidato);
    else
        printf("Final: %d não é primo ", candidato);
    return 0;
}
