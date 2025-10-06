#include<stdio.h>
main(){
    
    int score;
    char grade;

    printf("Enter your score:");
    scanf("%d",&score);

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 
            (score >= 40) ?: 'F' ;

    printf("Your grade is %c\n",grade);   

   switch (grade)
   {
    case 'A':
       printf("Excellent Work!\n");
    break;

    case 'B':
       printf("Well Done!\n");
    break;

    case 'C':
       printf("Good Job!\n");
    break;

    case 'D':
       printf("You can do better.\n");
    break;

    case 'E':
       printf("Need Improvement.\n");
    break;

    case 'F':
       printf("Fail.\n");
    break;

    default:
       printf("Invalid Grade.\n");
    break;   

   }



}