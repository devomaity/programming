#include <stdio.h>
#include <string.h>
#include <conio.h>
//It searches string str for character ch (
int main()
{
     char mystr[50] = "I�m example of function strchr";
     printf ("%s", strchr(mystr, 'f'));
     getch();
     return 0;
}