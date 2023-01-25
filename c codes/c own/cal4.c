// calculator without passing parameters to the fuction
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// void decide();
void add();
void difference();
void multiplication();
void divide();

char operations;

void input()
{
    operations;
    printf("Enter operator - (+,-,*,/)\n");
    fflush(stdin);
    scanf("%c", &operations);
}

void reverse() // function to repeat calculation
{

revert:

    input();

    if (operations == '+')
    {
        add();
    }
    else if (operations == '-')
    {
        difference();
    }
    else if (operations == '*')
    {
        multiplication();
    }
    else if (operations == '/')
    {
        divide();
    }
    else
    {
        printf("Invalid operation");
    }
    if (operations == '+' || operations == '-' || operations == '*' || operations == '/')
    {
        goto revert;
    }
}

void add()
{

    int num1, num2;
    // int add_result;
    printf("Enter operands\n");
    scanf("%d %d", &num1, &num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
}
void difference()
{
    int num3, num4;
    printf("Enter operands\n");
    scanf("%d %d", &num3, &num4);
    printf("%d - %d = %d\n", num3, num4, num3 - num4);
}
void multiplication()
{
    int num5, num6;
    printf("Enter operands\n");
    scanf("%d %d", &num5, &num6);
    printf("%d * %d = %d\n", num5, num6, num5 * num6);
}
void divide()
{
    int num7, num8;
    printf("Enter operands\n");
    scanf("%d %d", &num7, &num8);
    printf("%d / %d = %d\n", num7, num8, num7 / num8);
}
int main()
{
    reverse();
    //  decide();
    getch();
    return 0;
}