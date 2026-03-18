#include <stdio.h>

int main(){

  int copas[5] = {1958, 1962, 1970, 1994, 2002};
  int i;


  for(i=0; i<5; i++){
    printf("copas[%d] = %d\n", i+1, copas[i]);
  }

  return 0;
}
