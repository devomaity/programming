// without argument and return value.
#include<stdio.h>
int takenumber()
{
    int i;
    printf(" \n Enter a number ");
    scanf("%d",&i);
    return i;
}
int main(){
    int c;
    c = takenumber();
    printf("\n The number entered is %d ",c);

    return 0;
}