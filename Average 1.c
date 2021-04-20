#include<stdio.h>

int main(){
    
    double  A, B, C, MEDIA;
    
    scanf("%lf %lf",&A,&B);
    
    
    C = A * 3.5 + B * 7.5 ;
    
    MEDIA = C / 11;
    
    printf("MEDIA = %.5lf\n",MEDIA);
    
    return 0;
    }