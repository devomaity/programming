#include <stdio.h>
#include <conio.h>

int recursion(int a)
{
    if (a < 1)
    {
        return 1;
    }
    else
    {
        printf("%d\n", a);
        recursion(a - 1);
        printf("%d\n", a);
    }
}
int main()
{

    int num;
    printf("Enter the value of n\n");
    scanf("%d", &num);
    recursion(num);
    getch();
    return 0;
}