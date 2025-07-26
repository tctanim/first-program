#include<stdio.h>

int main () {

   double n;

   scanf("%lf",&n);

   //A = n * R*R
   double A, Pi = 3.14159;
   A = Pi * n*n;
   printf("A=%.4lf", A);

   return 0;


}
