#include<stdio.h>
int main (){
   int num,sum = 0;

   do {
    printf("Enter :");
    scanf("%d", &num);
    sum+=num;
   }
   while (num != 0.0);
   printf(" sum = %d",sum);


return 0;
}
