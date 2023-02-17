#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d",&i);
    int n[] = {4, -1, 0, 2, 5, -3};
    int *ptr;
    ptr = &n[i];

    printf("\n after adding 1 the value will is %d", (*ptr)+1);

    getch();
    return 0;
}