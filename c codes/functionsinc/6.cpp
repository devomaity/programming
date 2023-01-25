#include <stdio.h>       
//Example of C function with return statement
//defining function    
int cube(int n)
{  
	return n*n*n;   
}  
int main()
{      
	int result1=0,result2=0;          
	  
	result1=cube(2);//calling function  
	result2=cube(3);    
	      
	printf("%d \n",result1);  
	printf("%d \n",result2);  
	  
	return 0;     
}      
