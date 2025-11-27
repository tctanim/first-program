#include<stdio.h>
#include<stdlib.h>
int main() {

  int a,b,s;

  scanf("%d %d %d", &a,&b, &s);

  int Maior_AB = (a + b + abs(a - b))/2;
  int maior = (Maior_AB + s + abs(Maior_AB - s)) / 2;
  printf("%d eh o maior\n",maior);

return 0;
}