// strrev- this function is used to reverse a string.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    
    char str1[]="programming";
    char str2[]="well done";
    puts(strrev(str1));
    puts(strrev(str2));
    printf("the reverse string is %s",(str1),(str2));
    getch();
    return 0;
}