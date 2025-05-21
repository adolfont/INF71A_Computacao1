#include<stdio.h>
#include<time.h>

#define DIMENSAO1 2
#define DIMENSAO2 4
#define DIMENSAO3 5

int main()
{
    int m[DIMENSAO1][DIMENSAO2][DIMENSAO3];
    int i,j,k;

    srand(time(NULL));
    for(i=0; i<DIMENSAO1; i++)
        for(j=0; j<DIMENSAO2; j++)
            for(k=0; k<DIMENSAO3; k++)
                m[i][j][k] = rand()%10+1;

    for(i=0; i<DIMENSAO1; i++)
    {
        for(j=0; j<DIMENSAO2; j++)
        {
            for(k=0; k<DIMENSAO3; k++)
                printf("%2d ",m[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
