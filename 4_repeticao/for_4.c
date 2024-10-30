#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i<=10; i = i+1 )
    {
        for (int j = 3; j<=20;  j = j+4 )
        {
            printf("{i=%d, j=%d}\n", i, j);
        }

    }

    return 0;
}
