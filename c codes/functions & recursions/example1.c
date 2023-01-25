// with argument and with return.
#include<stdio.h>
int sum(int a,int b);// Here a & b are parameters or formal arguments

int main(){
    int a=4,b=2,c;
    //printf("\n The sum of a+b = %d",c);
    c=sum(a,b);// Here a & b are actual arguments
    printf("\n The sum of a+b = %d",c);
}
int sum(int a,int b)
{
    return  a+b;
}