#include<stdio.h>
void interchange(int *address)
{
    *address = 789;
}
int main(){
    
    int i = 72;
    printf("\n The value of a is %d",i);
    interchange(&i);
    printf("\n Interchange value of a is %d",i);
    return 0;
}

