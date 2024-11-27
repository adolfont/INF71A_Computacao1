#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 8
#define LIMITE 100

int main(){

  float valores[TAMANHO];
  int i;

  srand(time(0));

  for(i=0; i<TAMANHO; i++){
    valores[i] = 1+rand()%LIMITE;
  }


  for(i=0; i<TAMANHO; i++){
    printf("valores[%d] = %.f\n", i, valores[i]);
  }

  return 0;
}
