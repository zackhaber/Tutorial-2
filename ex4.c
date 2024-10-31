#include <stdio.h>
#include <string.h>

#define EMPLOYEES 10//We can have a total of 10 employees/entries 

main(){
    double monthly_salary, yearly_salary, total_salary;//All he variables which we will be needing 
    char name, surname;
    int age, precisions;

    printf("Enter number of precisions: ");//User enters the number of precisions 
    scanf("%d", &precisions);

    printf("\n%-5s %-12s %-12s %-5s %-15s %-15s\n", "No.", "Name", "Surname", "Age", "Monthly Salary", "Yearly Salary");//To properly seperate the coloums(CHATGPT was used for all 3 occurnces because I wasnt able to align them myself)


    for(int i = 0; i < EMPLOYEES; i++){
        printf("Enter name of emloyee number %d: ", i + 1);//So as to start from 1
        scanf("%10s", &name);//Maximum of 10 characters long (2b)

        printf("\nEnter surname of emloyee number %d: ", i + 1);//So as to start from 1
        scanf("%10s", &surname);//Maximum of 10 characters long (2b)

        printf("\nEnter age of emloyee number %d: ", i + 1);//So as to start from 1
        scanf("%d", &age);//User enters their age

        printf("\nEnter montly salary of employee number %d: ", i + 1);//So as to start from 1
        scanf("%f", &monthly_salary);//User enters their monthly salaries 

        yearly_salary = monthly_salary * 13;//13 months of salary
        total_salary += yearly_salary;//Adds all the yearly salaries of EVERY emplyee and adds them together 

        printf("%-5d %-12s %-12s %-5d %-*.*f %-*.*f\n",i + 1, name, surname, age,13, precisions, monthly_salary,13, precisions, yearly_salary);//Occurrence 2

        if((i + 1) % 5 == 0 && (i + 1) < EMPLOYEES){// To make it display after 5 times

            printf("\n%-5s %-12s %-12s %-5s %-15s %-15s\n", "No.", "Name", "Surname", "Age", "Monthly Salary", "Yearly Salary");//Occurrence 3
        }
    }

    printf("\nAverage annual salary: %.*f\n", precisions, total_salary / EMPLOYEES);//To help find the average amount 

    return 0;
}