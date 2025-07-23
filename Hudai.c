#include <stdio.h>
int main() {
   int i =1;
   double number, sum = 0.0;

   while (i <= 10) {

      printf("Enter a n%d: ", i);
      scanf("%lf", &number);

      if (number < 0.0) {
         continue;
      }
      ++i;
      sum += number;
   }

   printf("Sum = %.2lf", sum);

   return 0;
}
