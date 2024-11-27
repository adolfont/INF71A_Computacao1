#include<stdio.h>

int main(){
    int x = 10;
    int* y;
    y = &x;
    *y = 11;


    printf("x = %d\n", x);


    return 0;

}
