#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

/*

  recebe como entrada via teclado uma opção e três valores. O programa deve calcular e imprimir uma média correspondente a uma das seguintes opções:


•A = média aritmética.

• P = média ponderada com pesos 1, 2 e 3 para o primeiro, segundo e terceiro valor, respectivamente.
• G = média geométrica.
• H = média harmônica.

. I = média aritmética

O programa deve aceitar as opções tanto em caracteres maiúsculos como minúsculos. O programa deve exibir uma mensagem de erro caso a opção escolhida seja inválida.
  
*/

int main()
{
    char opcao;
    float a, b, c, resultado;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a opção (a, p, g, h): ");
    scanf("%c", &opcao);
    printf("A opção escolhida foi '%c'\n", opcao);

    printf("Digite três valores: ");
    scanf("%f %f %f", &a, &b, &c);
    opcao = tolower(opcao);
    printf("A opção escolhida foi '%c'\n", opcao);
    switch(opcao)
    {
    case 'a': //media aritmética
        resultado = (a + b + c) / 3;
        printf("Média aritmética: %.2f\n", resultado);
        break;

    case 'p': // media ponderada
        resultado = (a*1 + b*2 + c*3) / (1 + 2 + 3);
        printf("Média ponderada: %.2f\n", resultado);
        break;
    case 'g': //media geometrica
        resultado = cbrt(a * b * c);
        printf("Média geométrica: %.2f\n", resultado);
//            resultado = pow(a * b * c, 1.0/3);
//            printf("Média geométrica: %.2f\n", resultado);
        break;
    case 'h': //media harmonica
        if (a != 0 && b != 0 && c != 0)
        {
            resultado = 3 / (1/a + 1/b + 1/c);
            printf("Média harmônica: %.2f\n", resultado);
        }
        else
        {
            printf("Erro: valores não podem ser zero na média harmônica.\n");
        }
        break;
    default:
        printf("Erro: opção inválida. \n");
    }


    printf("\n");
    system("pause");

    return 0;
}

