#include <stdio.h>
// Reverse the array
// array always starts from index 0.
int main()
{
	int i, n, array[50];
	printf("\n Input the no of elements: ");
	scanf("%d", &n);
	printf("\n Input the array elements:   ");
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]); // array[i] - i is a index variable.
	printf("\n Print the array elements in reverse order:\n   ");
	for (i = n - 1; i >= 0; i--)
		printf("%4d", array[i]);

	return 0;
}
// (capital*single person ratio)/ sum of all parterns ratio.
