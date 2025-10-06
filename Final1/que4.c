#include <stdio.h>

main(){
    
    int num, count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    do 
    {
        num /= 10;
        count++;   
    } 
    while (num != 0); 

    printf("Total number of digits: %d\n", count);

    
}
