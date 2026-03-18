#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i<=10; i = i+1 )
    {
        if ((i % 3) == 0)
        {
            printf("i=%d é divisível por 3\n", i);
        }
        else  if ((i % 2) == 0)
        {
            printf("i=%d é divisível por 2\n", i);
        }
        else
        {
            printf("i=%d não é divisível por 3 ou por 2\n", i);
        }

    }

    return 0;
}
