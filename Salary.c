#include<stdio.h>

int main(){
    
    int  NUMBER, WH;
    float Rate, Salary;
    
    scanf("%d %d %f", &NUMBER, & WH, &Rate);
    
    Salary = WH * Rate;
    
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",Salary);
    
    return 0;
    }