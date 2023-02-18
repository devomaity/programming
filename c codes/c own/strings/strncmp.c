/*
Here, str1 and str2 are the strings to be compared, and n is the maximum number of characters to be compared.

The strncmp() function compares the first n characters of str1 and str2. It returns an integer less than, equal to, or greater than zero if str1 is less than, equal to, or greater than str2, respectively. The comparison is based on the ASCII value of the characters in the strings.

If n is greater than the length of either str1 or str2, the comparison will only be performed up to the length of the shorter string.

Here's an example of how to use strncmp():
*/
#include <stdio.h>
#include <string.h>
#include <string.h>
int main() {
   char str1[] = "hello world";
   char str2[] = "hello everyone";
   int result = strncmp(str1, str2, 5);
   if (result == 0) {
      printf("The first 5 characters of str1 and str2 are equal.\n");
   }
   else if (result < 0) {
      printf("The first 5 characters of str1 are less than str2.\n");
   }
   else {
      printf("The first 5 characters of str1 are greater than str2.\n");
   }
   return 0;
}
