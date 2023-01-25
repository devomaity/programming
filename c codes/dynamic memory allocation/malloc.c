/*
When you want you to use the concept of structures and linked list in programming, dynamic memory allocation is a must.
*/
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
int main()
{
    int n, i, *ptr;
    printf("\nEnter numbers: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the values:  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));//   &a[i] -> a + i -> Pointer_variable + IndexVariable 
    }
    printf("\n the entered values are ");
    for (i = 0; i < n; i++)
    {
        printf("\n%d", *(ptr + i)); // when we add asterisk it means the it will print the value stored in that address or pointer
    }
    free(ptr);
    getch();
        return 0;
}