#include<stdio.h>

int main()
{

    double time, speed, litter;

    scanf("%lf %lf",&time, &speed);

    litter = (time * speed) / 12;

    printf("%.3lf\n",litter);

    return 0;

}
