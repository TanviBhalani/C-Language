#include<stdio.h>
main(){

    int n,sum = 0;

    printf("Enter any number:");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    printf("Sum of all numbers:%d\n",sum);



}    
    