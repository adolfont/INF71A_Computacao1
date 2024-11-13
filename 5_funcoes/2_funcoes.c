#include <stdio.h>

float imc(float, float);

int main()
{
    float peso_pessoa, altura_pessoa, imc_pessoa;
    printf("Digite o peso: ");
    scanf("%f", &peso_pessoa);
    printf("Digite a altura: ");
    scanf("%f", &altura_pessoa);

    imc_pessoa = imc(peso_pessoa,altura_pessoa);
    printf("O IMC da pessoa é %f\n",imc_pessoa);

    if (imc_pessoa >= 40)
        printf("Este IMC indica obesidade grau III");
    else if (imc_pessoa >= 35)
        printf("Este IMC indica obesidade grau II");


    return 0;
}


float imc(float peso, float altura)
{
    return peso/(altura*altura);
}
