#include<stdio.h>
int prime(int n);

int main (){
  int num, flag=0;
  printf("Enter a number: ");
  scanf("%d",&num);
    prime(num);
    flag = prime(num);

    if (flag==0){
        printf("%d is a prime.",num);
    }
    else{
        printf("%d is not prime.",num);
    }
return 0;
}
int prime(int n){
    int flag =0;
for(int i=2;i<=n/2;i++){
    if(n%i==0){
        flag = 1;
        break;
    }
}
  return flag;

}
