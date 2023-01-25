#include <stdio.h>

int main()
{

   int a[10][10], b[10][10], c[10][10], i, j, m, n, p, q, k, sum;
   printf("\n Enter the rows and columns for first matix: ");
   scanf("%d %d", &m, &n);
   printf("\nEnter the elements for first matrix:\n");
   for ( i = 0; i < m; i++) // first loop for no. of rows.
   {
      for ( j = 0; j < n; j++) // second loop for no. of columns.
      {
         scanf("%d", &a[i][j]);
      }
   }
   printf("\n Enter the rows and columns for second matrix: ");
   scanf("%d %d", &p, &q);
   printf("Enter the elements for second matrix:\n");
   for ( i = 0; i < p; i++)
   {
      for ( j = 0; j < q; j++)
      {
         scanf("%d", &b[i][j]);
      }
   }
   printf("\n first matrix:\n");
   for ( i = 0; i < m; i++)
   {
      for ( j = 0; j < n; j++)
      {
         printf("%3d", a[i][j]);
      }
      printf("\n");
   }
   printf("\n second matrix:\n");
   for ( i = 0; i < p; i++)
   {
      for ( j = 0; j < q; j++)
      {
         printf("%3d", b[i][j]);
      }
      printf("\n");
   }
   if (n != p)
   {
      printf("\n cannot multiply");
   }
   else

      // multiplication of matrix.
      for ( i = 0; i < m; i++)
      {
         for ( j = 0; j < q; j++)
         {
            sum = 0;
            for (int k = 0; k < m; k++)
            {
               sum = sum + (a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
         }
      }

   // resultant matrix.
   printf(" The resultant matrix:\n");
   for ( i = 0; i < m; i++)
   {
      for ( j = 0; j < q; j++)
      {
         printf("%d\t", c[i][j]);
      }
      printf("\n");
   }

   return 0;
}