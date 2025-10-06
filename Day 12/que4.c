#include<stdio.h>

main(){

    for (int i = 0; i < 5; i++) 
    {

        for (int k = i; k > 1; k--)
        {
            printf(" ");
        }

        for (int j = 0; j < 5 - i; j++) 
        {
            if ((i + j) % 2 == 0) 
            {
                printf("1 ");
            } 
            else 
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    
}
