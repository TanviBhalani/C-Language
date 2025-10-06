#include<stdio.h>

main(){
    int n, sum = 0;
    int array[n];


    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n; i += 2) 
    {
        sum += array[i];
    }

    printf("Sum of elements at even indexes = %d\n", sum);

}
