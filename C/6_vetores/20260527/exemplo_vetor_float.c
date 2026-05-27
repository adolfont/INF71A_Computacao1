#include <stdio.h>

int main(){

    float numeros[5];

    for(int i = 0; i<5; i++){
        numeros[i] = i*8.5-4.58;
    }


    for(int i = 0; i<5; i++){
        printf("numeros[%d] = %.2f\n", i, numeros[i]);
    }


    return 0;
}
