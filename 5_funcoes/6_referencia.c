#include <stdio.h>

void muda(int* x){
    *x = 11;
}

int main(){
    int x = 10;

    muda(&x);

    printf("x = %d\n", x);

}
