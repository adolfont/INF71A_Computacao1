#include <stdio.h>

int main(){

  int copas[6];
  int i;

  copas[0]=1958;
  copas[1]=1962;
  copas[2]=1970;
  copas[3]=1994;
  copas[4]=2002;

  printf("Quando você acha que o Brasil ganha a próxima copa? ");
  scanf("%d", &copas[5]);

  for(i=0; i<6; i++){
    printf("copas[%d] = %d\n", i, copas[i]);
  }

  return 0;
}
