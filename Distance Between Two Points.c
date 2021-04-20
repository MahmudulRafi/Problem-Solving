#include<stdio.h>

int main()
{

    double x1, y1, x2, y2, dis1, dis2, distance;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    dis1 = (x2-x1)*(x2-x1);
    dis2 = (y2-y1) * (y2-y1);

    distance = sqrt(dis1 + dis2);

    printf("%.4lf\n",distance);

    return 0;
}
