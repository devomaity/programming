#include <stdio.h>

int main()
{
    int num, result = 0, orignalnum,rem;
    printf("Enter the number:\n");
    scanf("%d",&num);
    originalnum=num;
    while (num>0)
    {

        rem=orignalnum%10;
        result=result+(rem*rem*rem);
        orignalnum = num/10;
    }
    if (result==num)
    {
        printf("%d is an amstrong number\n",num);
    }
    else
        printf("%d is not an amstrong number\n",num);

    return 0;
}