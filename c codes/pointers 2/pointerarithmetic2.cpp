#include<stdio.h>
int main()
{
	int n[4] = {1,2,4,-3};
	int *ptr;
	ptr=&n[0];  // &n[0] - n + 0  // the index value of an array starts from 0
	printf("The value of ptr is: %d\n",*ptr); // * is used to print the value stored in the pointer
	printf("The address of the element is: %x\n",ptr); // only using the pointer variable without using * prints the address of the element
	ptr=ptr+2;
	*ptr=4;
	printf("The value of ptr is: %d\n",*ptr);
	printf("The address of the element is: %x\n",ptr);
	    
	return 0;    
}