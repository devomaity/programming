#include<stdio.h>

int main()
{
	int n[5]= {2,-3,4,-6,1};
	printf("Enter the elements\n");
    int *ptr; 
	     ptr = &n[3];	
	printf("\n the value = %d",*ptr);
	
return 0;	
}