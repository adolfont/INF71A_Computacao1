// Enunciado: Escreva um programa que receba como entrada,
// duas vezes, dia, mês e
// calcule a diferença de dias entre as datas e o início daquele ano.
// Considere que o ano não é bissexto.

// Exemplos:

/*

Informe o primeiro dia: 10
Informe o primeiro mês: 1

Informe o segundo dia: 30
Informe o segundo mês: 3

As diferenças são:
10 para 10/01
89 para 30/3


Protótipo:
void diferenca(int dia, int mes, int* dias);

*/
#include<stdio.h>


void diferenca(int dia, int mes, int* dias);

int main()
{

    int dia1, mes1, dia2, mes2, diferenca1, diferenca2;


    printf("Informe o primeiro dia: ");
    scanf("%d",&dia1);
    printf("Informe o primeiro mês: ");
    scanf("%d",&mes1);

    printf("Informe o segundo dia: ");
    scanf("%d",&dia2);
    printf("Informe o segundo mês: ");
    scanf("%d",&mes2);

    printf("As diferenças são:\n");

    diferenca(dia1,mes1,&diferenca1);
    printf("%d para %02d/%02d\n", diferenca1, dia1, mes1);

    diferenca(dia2,mes2,&diferenca2);
    printf("%d para %02d/%02d\n", diferenca2, dia2, mes2);

    return 0;
}

void diferenca(int dia, int mes, int* dias)
{
    int meses[12];
    int i;
    meses[0]=31;
    meses[1]=28;
    meses[2]=31;
    meses[3]=30;
    meses[4]=31;
    meses[5]=30;
    meses[6]=31;
    meses[7]=31;
    meses[8]=30;
    meses[9]=31;
    meses[10]=30;
    meses[11]=31;

    *dias = 0;
    for(i=0; i<mes-1; i++)
      *dias = *dias+meses[i];

    *dias = *dias + dia;
}
