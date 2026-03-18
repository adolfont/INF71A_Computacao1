#include <stdio.h>

int main(){

  int notas[8];
  int i;

  for(i=0; i<8; i++){
    printf("Digite a nota %d: ", i);
    scanf("%d", &notas[i]);
  }


  for(i=0; i<8; i++){
    printf("notas[%d] = %d\n", i, notas[i]);
  }

  return 0;
}
