#include<stdio.h>
main(){
    float base_salary = 100, hra_percentage = 10, da_percentage = 5,ta_percentage = 8;
   
    float hra, da, ta, gross_salary;

    hra = (hra_percentage / 100) * base_salary;
    da = (da_percentage / 100) * base_salary;
    ta = (ta_percentage / 100) * base_salary;

    gross_salary = base_salary + hra + da + ta;

    printf("Base Salary: %f\n", base_salary);
    printf("HRA: %f\n", hra);
    printf("DA: %f\n", da);
    printf("TA: %f\n", ta);
    printf("Gross Salary: %f\n", gross_salary);
}

