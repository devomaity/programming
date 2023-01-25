#include<stdio.h>
// Example : Factorial of a number using Recursion
int factorial(int x);

int main()
{
	 int a,b;
	 printf("Enter no.");
	 scanf("%d",&a);
	 b=factorial(a);
	 printf("Factorial of %d   =  %d",a,b);
	 return 0;
}
int factorial(int x)
{
	 int r=1;
	 if(x==0) // x=a
	    return 1;
	 else 
	    r=x*factorial(x-1); //Stack   - LIFO  
	 return r;
}
