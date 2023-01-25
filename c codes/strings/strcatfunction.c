// strcat- this funtion concatenate two string and print them together.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max_elements 50
int main(){
    
    char string1[max_elements];
    char string2[max_elements];
    gets(string1);
    gets(string2);
    puts(strcat(string1,string2));
    //printf("\n",strcat(string1,string2));
    getch();
    return 0;
}