#include <stdio.h>

float calcularMedia(float, float, float, float, float, float);
char verificarSituacao(float, float, float, float, float, float);
float digitaNota();

int main()
{
    float nota1, nota2, nota3, media;
    char situacao;

    nota1 = digitaNota();
    nota2 = digitaNota();
    nota3 = digitaNota();

    media = calcularMedia(nota1, nota2, nota3, 3, 4, 5);
    situacao = verificarSituacao(nota1, nota2, nota3, 3, 4, 5);
    printf("A média das notas %.1f, %.1f, %.1f é %.2f\n", nota1, nota2, nota3,
           media);

    printf("A situação é %c\n", situacao);

    return 0;
}

float digitaNota()
{
    float nota;
    printf("Digite uma nota: ");
    scanf("%f", &nota);
    return nota;

}


float calcularMedia(float nota1, float nota2, float nota3, float peso1, float peso2, float peso3)
{
    return (nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
}

char verificarSituacao(float nota1, float nota2, float nota3,  float peso1, float peso2, float peso3)
{
    float media = calcularMedia(nota1, nota2, nota3, peso1, peso2, peso3);

    if (media >= 7.0)
        return 'A';
    else if (media>=5.0)
        return 'R';
    else
        return 'F';

}
