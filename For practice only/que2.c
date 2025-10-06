#include<stdio.h>
main(){
    float Celcius, Fahrenheit;

    printf("Enter Temperature in Celcius: ");
    scanf("%f",&Celcius);

    Fahrenheit=(1.8*Celcius)+32;

    printf("%f Celcius= %f  Fahrenheit",Celcius,Fahrenheit);
}