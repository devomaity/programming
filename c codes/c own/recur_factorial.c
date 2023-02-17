// n!=n * (n-1)
#include<stdio.h>
#include<conio.h>

int factorial(int num)
{
    if (num==0)
    {
        return 1;
    }
    else
       return (num * factorial(num-1));
}

int main(){
    
    int number,result;
    printf("Enter a number\n");
    scanf("%d",&number);
    result = factorial(number);
    printf("The factorial of %d is %d\n",number,result);
    getch();
    return 0;
}