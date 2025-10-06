#include<stdio.h>
main(){

    int a[]={12,42,18,50,26};
             //0,1,2,3,4
    float sum=0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];

    }
    printf("%f",sum/5);
}