#include<stdio.h>
main(){
    float maths, english, science, average;

    printf("Enter Maths marks: ");
    scanf("%f",&maths);

    printf("Enter English marks: ");
    scanf("%f",&english);

    printf("Enter Science marks: ");
    scanf("%f",&science);

    if (maths>=0 & maths<=100 & english>=0 & english<=100  & science>=0 & science<=100)
    {
        average = (maths + english + science)/3;
        printf("Average mark: %f\n",average);
    } 
    
    else
    {
        printf("Wrong");
    }

}