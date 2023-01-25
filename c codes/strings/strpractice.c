// allow user to enter two strings and then concatenate them by saying that.
// str1 is a friend of str2. 
// and also take a third string.
#include<stdio.h>
#include<string.h>
int main(){
    
    char str1[20];
    char str2[10];
    char str3[10];
    printf("\n Enter the string1  ");
    gets(str1);
    printf("\n Enter the string2  ");
    gets(str2);
    printf("\n Enter the string3  ");
    gets(str3);
    printf("\n str1 is a friend of str2 and also include str3 ",strcat(str1,str2));
    return 0;
}