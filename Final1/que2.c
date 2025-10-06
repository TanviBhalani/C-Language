#include<stdio.h>

main(){

    int a,b,c;

    printf("Enter the value of First no.:");
    scanf("%d",&a);

    printf("Enter the value of Second no.:");
    scanf("%d",&b);

    printf("Enter the value of Third no.:");
    scanf("%d",&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("a has minimum value");
        }
        else
        {
            printf("c has minimum value");
        }

    }
    else
    {
        if(b<c)
        {
            printf("b has minimum value");
        }
        else
        {
            printf("c has minimum value");
        }
        
    }
    
}