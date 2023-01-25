#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void calculate()
{
    char operations;
    int no1, no2;
    printf("Enter two numbers\n");
    scanf("%d %d", &no1, &no2);
    fflush(stdin);
    printf("Enter operator  (+,-,*,/)\n");
    scanf("%c", &operations);

    switch (operations)
    {

    case '+':
    {
        printf("%d + %d = %d\n", no1, no2, (no1 + no2));
        break;
    }
    case '-':
    {
        printf("%d - %d = %d\n", no1, no2, (no1 - no2));
        break;
    }
    case '*':
        {
            printf("%d * %d = %d\n", no1, no2, (no1 * no2));
            break;
        }
    case '/':
        {
            printf("(%d) / (%d) = %d\n", no1, no2, (no1 / no2));
            break;
        }

    default:
        {
            printf("Invalid operation");
            break;
        }
    }
}

int main()
{

    calculate();
    getch();
    return 0;
}