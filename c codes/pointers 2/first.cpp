#include <stdio.h>
int main()
{
   int *ptr,q;
    q = 50;
   /* display q's value using ptr variable */
   ptr=&q;
   printf("\nValue=%d", *ptr);// Value of normal variable 
   printf("\nValue=%d", q); //  Value of normal variable 
   printf("\nAddress=%u", ptr); // Value of pointer variable or memory address
   
   return 0;
}
