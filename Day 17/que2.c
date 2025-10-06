#include<stdio.h>

DivisibleBy3And5(){
    int num;
    int ans;
     printf("Enter any number: ");
     scanf("%d", &num);

    ans = (num % 3 == 0) && (num % 5 == 0);

    if (ans)
    {       
      printf("The given number is divisible by both 3 & 5.\n",ans);
    } 
    else 
    {
        printf("The given number is not divisible by both 3 & 5.\n",ans);
    }
    
}

main(){

   DivisibleBy3And5();
}


