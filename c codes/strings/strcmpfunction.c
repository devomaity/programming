/* strcmp- this funtion compare two strings character by character.If the strings are equal,the function returns 0.
note:each character in a string is compared by the ASCII value by any other string.
 return value    remarks 
 0             if strings are equal  
>0             if the first non-matching character in str1 is greater(in ASCII)than that of str2. 
<0            if the first non-matching character in str1 is lower(in ASCII)than that of str2.
*/ 
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(){
 
    char  str1[]="Republic of";
    char  str2[]="gamers";
 
    printf("\n the strcmp for s1 and s2 returned is %d",strcmp(str1,str2));
    getch();
    return 0;
} 