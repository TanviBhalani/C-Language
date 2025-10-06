#include<stdio.h>

main(){

    float p, t, r, SI;

    printf("Enter the value of p:");
    scanf("%f", &p);

    printf("Enter the value of t:");
    scanf("%f", &t);

    printf("Enter the value of r:");
    scanf("%f", &r);

    SI = (p*t*r)/100;

    printf("Simple Interest = %f", SI);
    
}


