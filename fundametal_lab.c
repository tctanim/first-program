#include <stdio.h>


int main() {
    
    int n, result;
    int n100, n50, n20, n10, n5, n2, n1;

        scanf("%d", &n);
        result = n;

        n100 = result / 100;
        result %= 100;

        n50 = result / 50;
        result %= 50;

        n20 = result / 20;
        result %= 20;

        n10 = result / 10;
        result %= 10;

        n5 = result / 5;
        result %= 5;

         n2 = result / 2;
        result %= 2;

         n1 = result / 1;
        result %= 1;

        printf("%d\n",n);
        printf("%d nota(s) de R$ 100,00\n",n100);
        printf("%d nota(s) de R$ 50,00\n",n50);
        printf("%d nota(s) de R$ 20,00\n",n20);
        printf("%d nota(s) de R$ 10,00\n",n10);
        printf("%d nota(s) de R$ 5,00\n",n5);
        printf("%d nota(s) de R$ 2,00\n",n2);
        printf("%d nota(s) de R$ 1,00\n",n1);
    return 0;
}