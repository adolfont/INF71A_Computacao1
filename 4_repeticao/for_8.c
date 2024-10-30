#include <stdio.h>

#define N 5



int main()
{
    int i,j;

    for (i=1; i<=N; i++)
    {
//        printf("i = %d     ",i);
        for (j=1; j<=i; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
