#include <stdio.h>

int main(){

  int copas[6];
  int i;

  copas[0]=1958;
  copas[1]=1962;
  copas[2]=1970;
  copas[3]=1994;
  copas[4]=2002;
  copas[5]=2026;
  copas[-1]=-2;
  copas[-2]=1833;


  for(i=-2; i<6; i++){
    printf("copas[-1]=%d, i=%d  %d\n", copas[-1], i, copas[i]);
  }

  return 0;
}
