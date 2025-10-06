#include<stdio.h>
main(){
    float PI=3.14, radius,area;

    printf("Enter radius: ");
    scanf("%f",&radius);

    area = PI* radius * radius;

    printf("Area of circle=%f\n",area);

}