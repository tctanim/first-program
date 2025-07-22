#include <stdio.h>
int main() {
    int number1, number2;
    printf("Enter integers: ");
    scanf("%d", &number1);
    printf("Enter integers: ");
    scanf("%d", &number2);


    if(number1 == number2) {
        printf("Result: %d = %d",number1,number2);
    }


    else if (number1 > number2) {
        printf("Result: %d > %d", number1, number2);
    }


    else {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}
