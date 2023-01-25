#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 1, j = 1; // initializing a local variable
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if (i == 2 && j == 2)
            {
                continue; // will continue loop of j only
            }
            printf("%d %d\n", i, j);
        }
    } // end of for loop
    getch();
    return 0;
}
/*
As you can see,2 2 is not printed on the console because inner loop is continued at i==2 and j==2
*/