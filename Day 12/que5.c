#include<stdio.h>
main(){

    for (int i = 0; i < 5; i++)
    {
        for (int k = i; k > 0; k--)
        {
            printf(" ");
        }
        
        for (int j = 5-i ; j > 0; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
}