#include <stdio.h>

#define M 7
#define N 8



int main()
{
    int i,j;

    for (i=1; i<=M; i++)
    {
        for (j=1; j<=N; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
