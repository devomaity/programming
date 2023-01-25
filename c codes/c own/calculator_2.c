/*
if we declare a variable globally and take input those variables in the main function then while
using those variables inside any funtion we have to pass parameters
*/
// calcultor using fuctions
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// declaring funtions
void addition(int num1, int num2);
void decision(int num1, int num2);
void subtract(int num1, int num2);
void multiplication(int num1, int num2);
void division(int num1, int num2);
void reverse();

// declaring variables globally

int num1, num2;

int main()
{
    printf("Enter operands\n");
    scanf("%d %d", &num1, &num2);
    fflush(stdin);

    decision(num1, num2);
    // addition();
    // subtract();
    // multiplication();
    // division();
    getch();
    return 0;
}
// fuction initilization
void decision(int num1, int num2)
{
    char operator;
    printf("Enter operator - (+,-,*,/)\n");
    scanf("%c", &operator);

    if (operator== '+')
    {
        addition(num1, num2);
    }
    else if (operator== '-')
    {
        subtract(num1, num2);
    }
    else if (operator== '*')
    {
        multiplication(num1, num2);
    }
    else if (operator== '/')
    {
        division(num1, num2);
    }
    else
    {
        printf("Invalid operator\n");
    }
}

void addition(int num1, int num2)
{

    int add_result;

    add_result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, add_result);
}
void subtract(int num1, int num2)
{
    int difference_result;

    difference_result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, difference_result);
}
void multiplication(int num1, int num2)
{
    int multiply_result;

    multiply_result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, multiply_result);
}
void division(int num1, int num2)
{
    int divide_result;

    divide_result = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, divide_result);
}
