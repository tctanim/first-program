#include<stdio.h>
int main (){

  int a,b;

  scanf("%d",&a);

  for (b=1;b<=a;++b){

    //jake bag kortechi % jake dara bag kortechi==out pabo bag sesh.

    if (a%b==0) {
       printf("%d\n",b);
    }

  }
return 0;
}
