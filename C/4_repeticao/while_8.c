#include <stdio.h>
int main()
{
   int n, i=1;

   printf("Digite um numero inteiro: ");
   scanf("%d", &n);

   while(i<=100){
      if (i%n==2){
        printf("%d\n",i);
      }
      i=i+1;
   }

   return 0;
}
