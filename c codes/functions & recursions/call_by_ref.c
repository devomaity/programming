//(1) call by reference mehod of passing arguments to a c function copies the address of thr arguments into the formal parameters.
//(2) Addresses of the actual arguments are copied and then assigned to the corresponding formal arguments.
#include <stdio.h>
#include <conio.h>
void swap(int *x, int *y)
{
    int temp = *x; // save the value at address x temp = 25
    *x = *y;       // putting the value of y to x  x = 34
    *y = temp;     // putting the value temp to y  y = 25
    return;
}
int main()
{
    int a = 25, b = 34;
    printf("\n The value of x = %d and y = %d", a, b);
    swap(&a, &b);
    printf("\n After swap value of x = %d and y = %d", a, b);
    getch();
    return 0;
}