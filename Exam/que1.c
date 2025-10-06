#include<stdio.h>
main(){
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = ( 1.8 * celsius ) + 32;

    printf("%f Celsius = %f Fahrenheit \n", celsius, fahrenheit);

}