#include<stdio.h>
main(){
    float angle1,  angle2,  angle3;
    
    printf("Enter the first angle of Triangle: ");
    scanf("%f",&angle1);

    printf("Enter the second angle of Triangle: ");
    scanf("%f",&angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("The third angle of triangle is: %f\n",angle3);


}