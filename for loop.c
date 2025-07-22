#include<stdio.h>
int main(){
  int num,roll_fine, attendes =0;


   printf("Enter enteger :");
   scanf("%d", &num);

    for (roll_fine =1; roll_fine <=num;++roll_fine) {

        attendes+=roll_fine;
    }
    printf(" fine = %d TK.",attendes);

return 0;
}
