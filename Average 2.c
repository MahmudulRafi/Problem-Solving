#include<stdio.h>

int main(){
    
    double  A, B, C, D, MEDIA;
    
    scanf("%lf %lf %lf",&A,&B,&C);
    
    
    D = A * 2 + B * 3 + C * 5 ;
    
    MEDIA = D / 10;
    
    printf("MEDIA = %.1lf\n",MEDIA);
    
    return 0;
    }