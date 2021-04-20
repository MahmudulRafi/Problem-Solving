#include<stdio.h>

int main()
{
    int d, y, m, day;

    scanf("%d",&d);

    printf("%d ano(s)\n",d/365);

    m = d % 365 / 30;

    printf("%d mes(es)\n",m);

    day = d % 365 % 30 ;

    printf("%d dia(s)\n",day);


    return 0;
}
