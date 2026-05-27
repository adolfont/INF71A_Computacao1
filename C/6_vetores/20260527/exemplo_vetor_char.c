#include <stdio.h>

int main(){

    char letras[5];

    for(int i = 0; i<5; i++){
        letras[i] = 65 + i*2;
    }


    for(int i = 0; i<5; i++){
        printf("letras[%d] = %c\n", i, letras[i]);
    }

    printf("%s\n", letras);

    return 0;
}
