// Argument Passed But No Return value
#include<stdio.h>
void checkPrimeNumber(int n);

int main(){
int n;

printf("Enter a positive integer: ");
scanf("%d",&n);

checkPrimeNumber(n);
return 0;
}

void checkPrimeNumber(int n){
int i, flag = 0;

if (n==0||n==1)
    flag = 1;

  for(i = 2; i<=n/2; ++i){
    if(n%i == 0){
        flag = 1;
        break;
    }
  }
  if(flag == 1)
    printf("%d is not a prime number.",n);

  else
    printf("%d is a prime number.",n);
}
