#include <stdio.h>
#include <conio.h>

long int getpower(int b, int p)
{
    long result = 1;
    if (p == 0)
    {
        return result;
    }
    else
    {
        result = b * (getpower(b,p - 1)); // b is constant 
        return result;
    }
}
int main()
{

    int base, power;
    long int result;

    printf("Enter base\n");
    scanf("%d", &base);

    printf("Enter power\n");
    scanf("%d", &power);

    result = getpower(base, power);

    printf("%d to the power %d is %ld", base, power, result);
    getch();
    return 0;
}