#include <stdio.h>
#include <conio.h>
int fibonacci(int n) {
   if (n <= 1) {
      return n;
   } else {
      return fibonacci(n-1) + fibonacci(n-2);
   }
}

int main() {
   int limit, i;

   printf("Enter the limit: ");
   scanf("%d", &limit);

   printf("Fibonacci Series up to %d terms:\n", limit);

   for (i = 0; i < limit; i++) {
      printf("%d ", fibonacci(i));
   }
   getch();
   return 0;
}
