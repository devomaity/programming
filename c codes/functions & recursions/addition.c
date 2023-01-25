#include <stdio.h>
int addition(int var1, int var2);
int main()
{

    int a, b, c;
    printf("\n Enter number ");
    scanf("%d %d", &a, &b);
    c = addition(a, b);
    printf("\n The addition of %d+%d=%d", a, b, c);

    return 0;
}
int addition(int var1, int var2)
{
    int sum;
    sum = var1 + var2;
    return sum;
}
