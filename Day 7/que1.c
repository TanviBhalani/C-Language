#include<stdio.h>
main(){
    int num1, num2, num3, min;

    printf("Enter a value of the First number: ");
    scanf("%d",&num1);

    printf("Enter a value of the Second number: ");
    scanf("%d",&num2);

    printf("Enter a value of the Third number: ");
    scanf("%d",&num3);

    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

   
    printf("The minimum value is: %d\n", min);



}