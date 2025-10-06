#include<stdio.h>
main(){

    int a[]={7,4,9,5,2};
           //0,1,2,3,4
    int b[]={1,3,1,7,3};
           //0,1,2,3,4
    int c[]={};       

    for (int i = 0; i < 5; i++) 
    {
        c[i]= a[i] + b[i];
    }
    printf("Array C is: ");

    for (int i = 0; i < 5; i++) 
    {
        printf("%d  ", c[i]);
    }
    printf("\n");

           
     
}