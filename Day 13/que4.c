#include<stdio.h>
main(){
    for (int i = 0; i <= 5; i++)
    {
        for (int k = i; k > 0; k--)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= 5-i; j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
        
    }
    
}