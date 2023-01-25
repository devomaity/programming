#include<stdio.h>
// function prototype, also called function declaration
void swap(int a, int b);          

int main()
{
    int m = 22, n = 44;
    
    printf("\nvalues before swap  m = %d and n = %d", m,n);
    // calling swap function by value
    swap(m,n); //m and n are actual parameters.     
	printf("\nvalues after swap  m = %d and n = %d", m,n); 
	
	return 0;               
} 
void swap(int a, int b)
{ 
    int tmp;
    tmp = a;
    a = b;
    b = tmp;           
}
