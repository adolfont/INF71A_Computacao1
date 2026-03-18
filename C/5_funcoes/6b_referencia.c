#include<stdio.h>

int main(){
    int x = 10;
    // ISTO ESTÁ ERRADO!
    float* y;
    y = &x;
    *y = 11.1;


    printf("x = %d\n", x);


    return 0;

}
