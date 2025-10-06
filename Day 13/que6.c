#include<stdio.h>

main(){

    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", j);
        }
        for (int k = 1; k <= (5 - i)*2; k++) 
        {
            printf("  ");
        }
        for (int l = i; l >= 1; l--) 
        {
            printf("%d ", l);
        }
        printf("\n");
    }

}
