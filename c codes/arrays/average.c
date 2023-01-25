// program to find average of n numbers.
#include <stdio.h>

int main()
{

    int marks[100], n, i, sum = 0;
    float average;
    printf("\n Enter the number ");
    scanf("%d",&n);
    if (n > 10)
        printf("\nMore then 10 numbers are not allowed");
    else
    {
        printf("Enter %d numbers:",n);
        for (i = 0; i < n; i++)
        {

            scanf("%d", &marks[i]);
            sum += marks[i];
        }
        average = (float)sum / (float)n;
        printf("\n The sum=%d and average = %.2f", sum, average);
    }

    return 0;
}