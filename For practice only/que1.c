#include<stdio.h>
main(){
    int a,b,addition, subtraction,multiplication;
    float division;

    printf("Enter the first number a: ");
    scanf("%d",&a);

    printf("Enter the second number b: \n");
    scanf("%d",&b);

    addition =a+b;
    subtraction =a-b;
    multiplication = a*b;
    division =a/b;

    printf("Addition=%d,\n Subtraction=%d,\n  Multiplication=%d,\n Division=%f\n",addition,subtraction,multiplication,division);



}