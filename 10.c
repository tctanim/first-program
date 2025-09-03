#include <stdio.h>

int main() {
int time, hour;
float speed;

scanf("%d %d", &time, &hour);

speed = (time * hour)/12.0;
printf("%.3f\n",speed);

return 0;
}
