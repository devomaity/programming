/* given two numbers a and b, add them and then substract them and assign them to a and b using
call by reference */
#include <stdio.h>
void addsub(int *a1, int *b1)
{
    int temp;
    temp = *a1;
    *a1 = *a1 + *b1;
    *b1 = temp - *b1;
    return;
}
int main()
{
    int a = 46, b = 23;
    printf("\n The value of a=%d and b=%d", a, b);
    addsub(&a, &b);
    printf("\n After the function call a=%d & b=%d", a, b);
    return 0;
}
