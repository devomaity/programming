// In nested loop the innermost loop executes first
#include <stdio.h>
#include <conio.h>
int main()
{
    int num[30], i, j, a, n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)// input elements
        scanf("%d", &num[i]);
    for (i = 0; i < n; i++) // a
    {
        for (j = i; j < n; j++) // b
        {
            if (num[i] < num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("The numbers in descending order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", num[i]);
    }

    getch();
    return 0;
}