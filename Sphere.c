#include<stdio.h>

int main()
{

    double pi, R, VOLUME, RR;

    pi = 3.14159;

    scanf("%lf",&R);

    RR = R * R * R;

    VOLUME = 4.0/3.0 * pi * RR;

    printf("VOLUME = %.3lf\n",VOLUME);

    return 0;
}
