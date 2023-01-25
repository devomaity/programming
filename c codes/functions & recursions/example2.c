// with arguments and without return value.
#include<stdio.h>
void printstar(int n);

int main(){
    int i,n;
    printstar(100);
    return 0;
}
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'=');
    }
    
}
