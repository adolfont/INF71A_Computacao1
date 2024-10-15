#include<stdio.h>
int main()
{
    float peso, altura, imc;

    int idade = 20;
    int codigo;
    float salario;

    peso = 62.5;
    altura = 1.65;

    codigo = idade;

    printf("Calculo do IMC \n");
    printf("Altura: %f \n", altura);
    printf("Peso: %f \n", peso);

    imc = peso / (altura * altura);

    printf("IMC: %f \n\n", imc);

    return 0;

}
