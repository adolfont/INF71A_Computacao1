#include<stdio.h>

int ehBissexto(int ano);

int main()
{

    int i;
    for(i = 2000; i<=2410; i++)
        if (ehBissexto(i))
            printf("%d é um ano bissexto!\n", i);

    return 0;
}

int ehBissexto(int ano)
{
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
        return 1;
    else
        return 0;

}
