#include <stdio.h>
#include <string.h>


float calcularMedia(float, float, float, float, float, float);
char* verificarSituacao(float, float, float, float, float, float);
float digitaNota();

int main()
{
    float nota1, nota2, nota3, media;
    int i;
    char situacao[20];

//    nota1 = digitaNota();
//    nota2 = digitaNota();
//    nota3 = digitaNota();



    for(i = 1; i<=8; i++)
    {

        nota1 = i;
        nota2 = i +1;
        nota3 = i + 2;

        media = calcularMedia(nota1, nota2, nota3, 3, 4, 5);
        strcpy(situacao, verificarSituacao(nota1, nota2, nota3, 3, 4, 5));
        printf("A média das notas %.1f, %.1f, %.1f é %.2f\n", nota1, nota2, nota3,media);

        printf("A situação é %s\n", situacao);

    }

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

char* verificarSituacao(float nota1, float nota2, float nota3,  float peso1, float peso2, float peso3)
{
    float media = calcularMedia(nota1, nota2, nota3, peso1, peso2, peso3);

    if (media >= 7.0)
        return "Aprovado";
    else if (media>=5.0)
        return "Recuperação";
    else
        return "Reprovado";

}
