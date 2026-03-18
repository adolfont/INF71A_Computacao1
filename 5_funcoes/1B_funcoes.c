#include<stdio.h>

float imc(float, float);
void le(float*, float*);
void escreve_imc(float, float);

int main(){

    float peso, altura;

    le(&peso,&altura);

    escreve_imc(peso, altura);
    
    return 0;
}


float imc(float peso, float altura){
    return peso/(altura*altura);
}

void le(float* ponteiro_para_peso, float* ponteiro_para_altura){
    printf("Digite seu peso (em kg): ");
    scanf("%f", ponteiro_para_peso);
    printf("Digite seu altura (em m): ");
    scanf("%f", ponteiro_para_altura);
}

void escreve_imc(float peso, float altura){
    printf("Seu peso eh %.1f kg e sua Altura eh %.2f metros.\n", peso, altura);
    printf("Seu Indice de Massa Corporea eh: %.1f", imc(peso,altura));
}
