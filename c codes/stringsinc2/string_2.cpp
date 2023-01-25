//Using getchar() to read a character
#include<stdio.h>
//Input a string character by character 
// so that space can be taken
int main()
{
    char name[30], ch;
    int i = 0;
    printf("Enter a name :    ");
    while(ch != '\n')    // terminates if user hit enter
    {
	    ch = getchar();
        name[i] = ch;
        i++;
    }
    name[i] = '\0';       // inserting null character at end
    printf("Name: %s", name);
    return 0;
}
