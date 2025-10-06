#include<stdio.h>

main(){
    int n;
    int a[n], b[n];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array A's elements:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter array B's elements:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

}
