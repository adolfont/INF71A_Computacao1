#include <stdio.h>

int main(){

    int numeros[5];

    for(int i = 0; i<5; i++){
        numeros[i] = 100+i*8-45;
    }


    for(int i = 0; i<5; i++){
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

//    printf("%s", numeros);

    return 0;
}
