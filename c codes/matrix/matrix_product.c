#include <stdio.h>
#define A 20
int main()
{

    int mat1[A][A], mat2[A][A], mat3[A][A], i, j, g, h, p, q, sum, k;
    printf("\n Enter the rows and columns for first matrix:\n");
    scanf("%d %d", &g, &h);
    printf("\n Enter the 1st matrix:\n");
    for (i = 0; i < g; i++)
        
    {
        for (j = 0; j < h; j++)
            
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\n Enter the rows and columns for second matrix:\n");
    scanf("%d %d", &p, &q);
    printf("\n Enter the 2nd matrix:\n");
    for (i = 0; i < p; i++)
        
    {
        for (j = 0; j < q; j++)
            
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\n first matrix:\n");
    for (i = 0; i < g; i++)
    {
        for (j = 0; j < h; j++)
        {
            printf("%3d", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n second matrix:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%3d", mat2[i][j]);
        }
        printf("\n");
    }
    if (h != p)
    {
        printf("can't be multiplied");
    }
    else
    {
        for (i = 0; i < g; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for ( k = 0; k < i; k++)
                {
                    sum += mat1[i][k] * mat2[k][j];
                }
                mat3[i][j] = sum;
                //sum += mat1[i][k] * mat2[k][j];
            }
            
        }
    
    printf("\n multiplication result\n");
    for (i = 0; i < g; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
    }    
}