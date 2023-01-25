//C program to read line of text using gets() and puts()
//To make program easier, there are predefined functions gets()
// and puts in C language
// to read and display string respectively.
#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter name:  ");
    gets(name);     //Function to read string from user.
    printf("Name: ");   
    //puts("HELLO ! ");  //puts() - put string automatically takes new line
    printf("HELLO ! ");  
    puts(name);    //Function to display string.    
    return 0;
}
