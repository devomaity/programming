#include <stdio.h>      
// Example of C function with no return statement
//defining function    
void hello()
{  
	printf("hello c programming\n");  
}  
int main()
{           
	hello();//calling a function  
	hello();  
	hello();  
	for(int i=1;i<=10;i++)
	   hello(); 
	  
	return 0;    
}      
