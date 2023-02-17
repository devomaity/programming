#include<stdio.h>
#include<conio.h>
int gcd(int x, int y)
{
    if (y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x % y);
    }
    
}
int main(){

    int n1,n2,temp;
    printf("Enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    temp = gcd(n1,n2);
    printf("gcd of %d and %d is %d\n",n1,n2,temp);
    getch();
    return 0;
}
/*
Euclid's algorithm is a method for finding the greatest common divisor (GCD) of two integers. The GCD is the largest positive integer that divides both numbers without leaving a remainder.

The algorithm is based on the observation that the GCD of two numbers is the same as the GCD of the smaller number and the remainder of the larger number divided by the smaller number. This observation can be used recursively to reduce the problem of finding the GCD of two numbers to the problem of finding the GCD of a smaller pair of numbers.

Here is the basic algorithm:

Let a and b be the two numbers for which we want to find the GCD.
If b is zero, the GCD is a. If a is zero, the GCD is b.
If a is greater than b, divide a by b and take the remainder r. The GCD of a and b is the same as the GCD of b and r. Set a to b and b to r, and go back to step 2.
If b is greater than a, divide b by a and take the remainder r. The GCD of a and b is the same as the GCD of a and r. Set b to a and a to r, and go back to step 2.
This process is repeated until we reach a point where one of the numbers is zero. At that point, the other number is the GCD of the original two numbers.

Here is an example:

Let a = 54 and b = 24.

Step 1: b is not zero, so continue.
Step 2: a is greater than b, so divide a by b and take the remainder: 54 / 24 = 2 with a remainder of 6. Set a to b (a = 24) and b to r (b = 6).
Step 2: a is greater than b, so divide a by b and take the remainder: 24 / 6 = 4 with a remainder of 0. The GCD is b, which is 6.

So the GCD of 54 and 24 is 6.
*/