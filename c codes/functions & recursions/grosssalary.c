#include <stdio.h>
#include <stdlib.h>
void decide();
void calculategrosssalary();
void calculategrosssalary_person_user_input();
int main()
{
    decide();
}
void decide()
{
    int input;
    char choose;
    printf("Enter 1 to calculate one person Gross Salary \n Enter 0 to calculate user input's person's Salary \n");
    scanf("%d", &input);
    if (input == 1)
    {
        calculategrosssalary();
    }
    else if (input == 0)
    {
        calculategrosssalary_person_user_input();
    }
    else
    {
        printf("You have enterd : %d Choose between 1 & 0 \n", input);
        printf("press y to run the program again or n to exit\n");
        fflush(stdin);
        scanf("%c", &choose);
        if (choose == 'y')
        {
            decide();
        }
        // else
        //{
        printf("exited");
        exit(1);

        //}
    }
}

void calculategrosssalary()
{
    int basicsalary, grossalary, HRA, DA;
    printf("Enter the salary of the employee\n");
    scanf("%d", &basicsalary);

    printf("Enter the HRA percentage\n");
    scanf("%d", &HRA);

    printf("Enter the DA percentage\n");
    scanf("%d", &DA);

    // house rental allowance
    HRA = (basicsalary * HRA / 100);
    printf("The HRA = %d\n", HRA);
    // dearness allowance
    DA = (basicsalary * DA / 100);
    printf("The DA = %d\n", DA);

    grossalary = basicsalary + HRA + DA;
    printf("Gross salary = %d\n", grossalary);
}

void calculategrosssalary_person_user_input()
{
    int basicsalary, grossalary, HRA, DA;
    int no_of_employees, i;
    printf("Enter the no. of employees\n");
    scanf("%d", &no_of_employees);
    for (i = 0; i < no_of_employees; i++)
    {

        printf("employee %d:\n", i + 1);
        printf("Enter the basic salary\n");
        scanf("%d", &basicsalary);

        printf("Enter the HRA percentage\n");
        scanf("%d", &HRA);

        printf("Enter the DA percentage\n");
        scanf("%d", &DA);

        // house rental allowance
        HRA = (basicsalary * HRA / 100);
        printf("The HRA = %d\n", HRA);
        // dearness allowance
        DA = (basicsalary * DA / 100);
        printf("The DA = %d\n", DA);

        grossalary = basicsalary + HRA + DA;
        printf("Gross salary = %d\n\n", grossalary);
    }
}
