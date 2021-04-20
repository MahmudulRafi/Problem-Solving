#include<stdio.h>

int main()
{

    float a, b, c , area;

    scanf("%f %f %f",&a, &b, &c);

    if((a < (b+c)) && (b < (a+c)) && (c < (b+a)))
    {
        printf("Perimetro = %.1f\n",a+b+c);
    }
    else
    {
       area = ((a + b) / 2 ) * c;
       printf("Area = %.1f\n",area);
    }



}
