#include<stdio.h>

checkEvenOdd() 
{
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    if (number % 2 == 0) 
    {
        printf("The number %d is even.\n", number);
    } 
    else 
    {
        printf("The number %d is odd.\n", number);
    }
}

int main() {

    checkEvenOdd(); 
    
}
