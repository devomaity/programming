#include<stdio.h>
int sum;
int func2()
{
    static int sum;
    sum++;
    printf("\n %d",sum);
    return sum;
}
int main(){
    
    sum = func2();
    sum = func2();
    sum = func2();
    sum = func2();
    sum = func2();
   // printf("\n %d",sum);
    return 0;
}