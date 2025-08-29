#include<stdio.h>
int main(){

  char operation, raw;
  double n1, n2;

    Jump:
    printf("Enter an integer (+, -, *, /):");
    scanf("%c", &operation);
    printf("Enter two operation: ");
    scanf("%lf %lf", &n1, &n2);

  switch(operation)
  {
      case '+':
          printf("%.1lf + %.1lf = %.1lf", n1, n2,  n1+n2);
          break;

          case '-':
          printf("%.1lf - %.1lf = %.1lf", n1, n2,  n1-n2);
           break;

          case '*':
          printf("%.1lf * %.1lf = %.1lf", n1, n2,  n1*n2);
           break;

          case '/':
          printf("%.1lf / %.1lf = %.1lf", n1, n2,  n1/n2);
           break;

          default:
            printf("Error! operation is nor correct.Please try again!\n");
            scanf("%c", &raw);
            goto Jump;
  }
return 0;
}
