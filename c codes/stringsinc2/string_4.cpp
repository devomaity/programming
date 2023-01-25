//Passing Strings to Functions
#include <stdio.h>
void displayString(char str[]);

int main()
{
    char x[50];
    printf("Enter string: ");
    gets(x);             
    displayString(x);     // Passing string -  str  to function.    
    return 0;
}

void displayString(char str[])
{
    printf("String Output:   ");
    puts(str);
}
