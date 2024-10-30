#include <stdio.h>
#include <math.h>

int main()
{
    // Isabela Nichele

    for (int i = 20; i<=30; i = i+1 )
    {
        if ((i % 5) == 0)
        {
            printf("i=%d termina em 0 ou 5\n", i);
        }
        else  if ((i % 2) == 0)
        {
            printf("i=%d é par\n", i);
        }
        else
        {
            printf("i=%d nao termina em 5 e nao é par\n", i);
        }

    }

    return 0;
}
