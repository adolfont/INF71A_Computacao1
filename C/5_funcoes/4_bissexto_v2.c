#include<stdio.h>

int ehBissexto(int ano);
void imprima_bissextos(int anoInicial, int anoFinal);

int main()
{
    imprima_bissextos(2000, 2030);

    return 0;
}

int ehBissexto(int ano)
{
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
        return 1;
    else
        return 0;

}

void imprima_bissextos(int anoInicial, int anoFinal){
    int i;
    for(i = anoInicial; i<=anoFinal; i++)
        if (ehBissexto(i))
            printf("%d é um ano bissexto!\n", i);

}
