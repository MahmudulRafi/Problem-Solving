#include<stdio.h>

int main(){
    
    
    char name[100];
    double Salary, TSell, TSalary, Total;

    scanf("%s",name);
    scanf("%lf %lf", &Salary, &TSell);
    
    TSalary = (TSell * 15) / 100;
    Total = Salary + TSalary;
    
    printf("TOTAL = R$ %.2lf\n", Total);
    
    return 0;
    }