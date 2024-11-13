#include <stdio.h>

float calcularMedia(float, float, float);
char verificarSituacao(float, float, float);
float digitaNota();

int main()
{
    float nota1, nota2, nota3;

    nota1 = digitaNota();
    nota2 = digitaNota();
    nota3 = digitaNota();

    printf("A média das notas %.1f, %.1f, %.1f é %.2f", nota1, nota2, nota3, calcularMedia(nota1, nota2, nota3));

    return 0;
}

float digitaNota()
{
    float nota;
    printf("Digite uma nota: ");
    scanf("%f", &nota);
    return nota;

}


float calcularMedia(float nota1, float nota2, float nota3)
{
    return (nota1+nota2+nota3)/3;
}

char verificarSituacao(float nota1, float nota2, float nota3)
{
    float media = calcularMedia(nota1, nota2, nota3);

    if (media >= 7.0)
        return 'A';
    else if (media>=5.0)
        return 'R';
    else
        return 'F';

}
