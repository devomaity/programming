#include <stdio.h>
#include<conio.h>
int main() {
   int limit, i, first = 0, second = 1, next;

   printf("Enter the limit: ");
   scanf("%d", &limit);

   printf("Fibonacci Series up to %d terms:\n", limit);

   for (i = 0; i < limit; i++) 
   {
      if (i <= 1) 
      {
         next = i;
      } 
      else 
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d ", next);
   }
   getch();
   return 0;
}
