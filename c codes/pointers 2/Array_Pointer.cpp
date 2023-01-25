#include <stdio.h>
int main()
{
   char charArr[4];
   int i;

   for(i = 0; i < 4; ++i)
   {
      printf("Address of charArr[%d] = %x\n", i, &charArr[i]);
   }

   return 0;
}
