#include <stdio.h>
#include <conio.h>
#define size 100
// function to sort an array in ascending order
int Ascending(int n);

int main()
{

    int pass;
    printf("Enter size of array\n");
    scanf("%d", &pass);
    Ascending(pass);
    getch();
    return 0;
}
int Ascending(int n)
{
    int i, j, num[size], inter_change;
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (num[i] > num[j])
            {
                inter_change = num[i];
                num[i] = num[j];
                num[j] = inter_change;
            }
        }
    }
    printf("Array sorted in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }
}
