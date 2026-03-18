#include <stdio.h>


int main()
{

    /*
    Crie um programa em C que:

    Solicite ao usuário que digite um número inteiro positivo.
    Utilize um laço while para iterar de 1 até o número digitado pelo usuário.
    Para cada número no intervalo, verifique se ele é primo.

    Um número primo é divisível apenas por 1 e por ele mesmo.
    Use um laço for interno para verificar a divisibilidade do número.


    Caso o número seja primo, imprima uma mensagem informando o número primo e o índice (posição) dele na sequência de números primos encontrados.
    Utilize a instrução break para sair do laço interno for assim que a divisibilidade do número for comprovada, pois não é necessário continuar a verificação.
    O programa deve parar de imprimir números primos assim que o total de primos encontrados for igual a 10.
    */

    int num, eh_primo, div, candidato;
    int i = 1, contadorPrimos=0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);


    while(i<=num)
    {
        candidato = i;

        // calcula se candidato é primo
        eh_primo = 1;
        for (div=2; div<=(candidato/2); div++)
        {
            if (candidato%div == 0)
            {
                eh_primo = 0;
                break;
            }
        }
        // escreve se candidato é primo
        if(eh_primo==1)
            printf("%d é o primo %d \n", candidato, ++contadorPrimos);
        else
            printf("%d não é primo \n", candidato);

        // interrompe se já achou 10 primos
        if (contadorPrimos == 10)
            break;

        i++;
    }
    return 0;

}
