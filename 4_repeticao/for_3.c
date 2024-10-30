#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1, j = 3; i<=10, j<=20; i = i+1, j = j+4 ){
        printf("{i=%d, j=%d}\n", i, j);
    }

    return 0;
}
