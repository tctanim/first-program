#include<stdio.h>
int main(){

  int Mailston;

    printf("Your section: ");
    scanf("%d", &Mailston);

    if (Mailston <= 5) {
        printf(" My section is %d.",Mailston);
    }
    else {
        printf("Is this not my section.");
    }



return 0;
}
