#include<stdio.h>
main(){

    for (int i = 1; i <= 5; i++)
    {
        for (int k = i; k > 1; k--)
        {
            printf(" ");
        }
        
        for (int j = 5; j >= i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
}