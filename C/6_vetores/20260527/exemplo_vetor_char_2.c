#include <stdio.h>

int main(){

    char letras[6];

    for(int i = 0; i<5; i++){
        letras[i] = 65 + i*2;
    }


    for(int i = 0; i<5; i++){
        printf("letras[%d] = %c\n", i, letras[i]);
    }

    letras[5]='\0';

    printf("%s\n", letras);

    return 0;
}
