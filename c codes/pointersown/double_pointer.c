#include <stdio.h>
#include <conio.h>

int main()
{

    int p = 8;
    int *ptr1;
    ptr1 = &p;
    int **ptr2;
    ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    printf("%d %d\n", ptr1, *ptr1);
    printf("Address stored at *ptr2 = %d\n", *ptr2);
    printf("Value stored at address **ptr2 = %d\n", **ptr2);
    printf("Address stored at **ptr3 = %d\n", **ptr3);
    printf("Value at address **ptr3 = %d\n", ***ptr3);
    ***ptr3 = 10;
    printf("The value of p = %d\n", p);
    **ptr2 = *ptr1 + 3;
    printf("The value of p = %d", p);
    getch();
    return 0;
}