#include <stdio.h>

int main()
{
    int num, sum = 0, temp, r;
    printf("Enter the number:\n");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {

        r=num%10;
        sum=sum+(r*r*r);
        num = num/10;
    }
    if (temp==sum)
    {
        printf("amstrong number\n");
    }
    else
        printf(" not an amstrong number\n");

    return 0;
}