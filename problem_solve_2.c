#include<stdio.h>
int main(){
 
    int X;
    float Y;

    scanf("%d", &X);
    scanf("%f", &Y);

    float total = X / Y;
    printf("%.3f km/l\n", total);

    return 0;
}