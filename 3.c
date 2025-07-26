#include<stdio.h>
int main(){

   int Rakib, Siam, Arman;

   printf("Her name value :");
   scanf("%d %d %d", &Rakib,&Siam,&Arman);



   if ( Siam  == 10){
        printf("He is Siam.%d\n",Siam);

   }
   else if ( Rakib != 5){
        printf("He is Rakib.%d\n",Rakib);
   }


    else if ( Arman <= 15) {
            printf("He is Arman.%d\n",Arman);
   }

   else {
    printf("that was not show in the program.");

   }
return 0;
}
