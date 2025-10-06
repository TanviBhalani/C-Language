#include<stdio.h>
main(){

    int n,i;

    printf("Enter any number:");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
      printf("%d X %d = %d\n",n, i, n*i);
    }
    
    
}


