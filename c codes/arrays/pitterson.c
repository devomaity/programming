/*
  !1 + !4 + !5
  = 1 + 24 + 120
  =145
*/
#include <stdio.h>
#include <conio.h>

int main()
{

    int lower, upper, temp, x, sum, fact, n, i, num;
    printf("Enter lower limit\n");
    scanf("%d", &lower);
    printf("Enter upper limit\n");
    scanf("%d", &upper);

    for (x = lower; x <= upper; x++) // lower = 145
    {
        temp = x;
        sum = 0;
        while (temp != 0)
        {
            num = temp % 10; // 145%10
            fact = 1;
            for (i = 1; i <= num; i++) // num = 5
                fact = fact * i;
            sum+= fact;
            temp = temp / 10;
        }
        if (x == sum)
        {
            printf("%d is a krishnamurthy or pitterson number\n", x);
        }
    }
    getch();
    return 0;
}