#include<stdio.h>

int main()
{

    float sl;

    scanf("%f",&sl);

    if( sl >= 0 && sl <= 400 )
    {
        printf("Novo salario: %.2f\n", sl * 1.15);
        printf("Reajuste ganho: %.2f\n", sl * .15 );
        printf("Em percentual: 15 %%\n");

    }

    else if( sl >= 400.01 && sl <= 800 )
    {
        printf("Novo salario: %.2f\n", sl  * 1.12);
        printf("Reajuste ganho: %.2f\n", sl * .12 );
        printf("Em percentual: 12 %%\n");

    }

    else if( sl >= 800.01 && sl <= 1200 )
    {
        printf("Novo salario: %.2f\n", sl * 1.10);
        printf("Reajuste ganho: %.2f\n", sl * .10 );
        printf("Em percentual: 10 %%\n");


    }

    else if( sl >= 1200.01 && sl <= 2000 )
    {
        printf("Novo salario: %.2f\n", sl * 1.07);
        printf("Reajuste ganho: %.2f\n", sl * .07 );
        printf("Em percentual: 7 %%\n");

    }
    else
    {
        printf("Novo salario: %.2f\n", sl * 1.04);
        printf("Reajuste ganho: %.2f\n", sl * .04 );
        printf("Em percentual: 4 %%\n");

    }




}
