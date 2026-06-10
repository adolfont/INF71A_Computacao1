#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define DIMENSAO 4

void desenha_tabuleiro(char [DIMENSAO][DIMENSAO]);
void preenche_tabuleiro(char [DIMENSAO][DIMENSAO]);
void coloca_no_tabuleiro(char [DIMENSAO][DIMENSAO], char, int, int);
int verifica_se_terminou(char [DIMENSAO][DIMENSAO], char [3]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char  tabuleiro [DIMENSAO][DIMENSAO];
    char simbolos[3]= {'X', 'O', '#'};
    int x,y;

    preenche_tabuleiro(tabuleiro);
    desenha_tabuleiro(tabuleiro);
    coloca_no_tabuleiro(tabuleiro, 'X', 1, 1);
    desenha_tabuleiro(tabuleiro);
    coloca_no_tabuleiro(tabuleiro, 'O', 2, 2);
    desenha_tabuleiro(tabuleiro);
    coloca_no_tabuleiro(tabuleiro, '#', 4, 1);
    desenha_tabuleiro(tabuleiro);
    coloca_no_tabuleiro(tabuleiro, '#', 4, 2);
    desenha_tabuleiro(tabuleiro);
    coloca_no_tabuleiro(tabuleiro, '#', 4, 3);
    desenha_tabuleiro(tabuleiro);

    do
    {
        printf("Em que posição (x,y) você quer jogar o '#'?\n");
        scanf("%d %d", &x, &y);
    }
    while (!(x>0 && x<=DIMENSAO && y>0 && y<=DIMENSAO));

    coloca_no_tabuleiro(tabuleiro, '#', x, y);
    desenha_tabuleiro(tabuleiro);
    if (verifica_se_terminou(tabuleiro, simbolos))
    {
        printf("O jogo terminou!");
    }
    else
    {
        printf("O jogo não terminou!");
    }
    return 0;

}


void desenha_tabuleiro(char  tabuleiro [DIMENSAO][DIMENSAO])
{

    for (int i=0; i<DIMENSAO; i++)
    {
        for (int j=0; j<DIMENSAO; j++)
        {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("-------------\n");

}

void preenche_tabuleiro(char  tabuleiro [DIMENSAO][DIMENSAO])
{

    for (int i=0; i<DIMENSAO; i++)
    {
        for (int j=0; j<DIMENSAO; j++)
        {
            tabuleiro[i][j] = '.';
        }
    }

}

void coloca_no_tabuleiro(char tabuleiro [DIMENSAO][DIMENSAO], char simbolo, int x, int y)
{
    tabuleiro[x-1][y-1] = simbolo;
}


int verifica_se_terminou(char tabuleiro [DIMENSAO][DIMENSAO], char simbolos [3])
{
    // verifica as linhas
    // simbolo[2]
    // TODO verificar todas as linhas
    for(int i=0; i<DIMENSAO; i++)
    {
        int satisfaz = 1;
        for(int j =0; j<DIMENSAO; j++)
        {
            if (tabuleiro[i][j] != simbolos[2])
            {
                satisfaz=0;
            }
        }
        if (satisfaz == 1)
            return 1;
    }


    return 0;
}
