#include<stdio.h>

int main()
{
    int km;
    float fuel, avgCon;

    scanf("%d %f", &km, &fuel);

    avgCon = km / fuel;

    printf("%.3f km/l\n",avgCon);

    return 0;


}
