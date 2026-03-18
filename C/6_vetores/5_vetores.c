#include <stdio.h>

#define TAMANHO 3

int main(){

  float valores[TAMANHO];
  int i;
//  float copia;

//  copia = valores;
//  valores = 10;

  for(i=0; i<TAMANHO; i++){
    valores[i] = (i+1)*10;
  }

  for(i=0; i<TAMANHO; i++){
    printf("valores[%d] = %.f\n", i, valores[i]);
  }

  printf("Endereço do vetor valores: %f", valores);

  return 0;
}
