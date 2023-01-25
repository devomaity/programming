#include <stdio.h>
int max(int x, int y);

int main()
{
    int a = 200, b = 250;
    int max1;
    // printf("\n the values %d and %d ",a,b);
    max1 = max(a, b);
    printf("\n max value: %d ",max1);
    return 0;
}
int max(int x, int y)
{
    int result;
    if (x > y)
        result = x;
    else
        result = y;

    return result;
}