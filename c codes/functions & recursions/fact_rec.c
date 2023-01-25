#include<stdio.h>
int factorial(int x)
{
    int result;
    if (x==0)
       return 1;
    else
       result=x*factorial(x-1);   
    return r;    
    
    
}
int main(){
    int a,b;
    printf("\n Enter a number ");
    scanf("%d",&a);
    b=factorial(a);
    printf("\n The factorial of %d = %d",a,b);
    return 0;
}