/*
Goto statement

1) Also called jump statement in c
2) Used to transfer program control to a predefined label
3) Goto statement is preferable when we need to break multiple loops using a single statement at the same time
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i = 1;
    printf("Enter the number whose table you want to print?");
    scanf("%d", &num);
table:
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
    if (i <= 10)
        goto table;
    getch();
    return 0;
}