/*
continue statement

1) Used to bring the program control to the next iteratio of the loop
2) The continue statement skips some code inside the loop and continues with the next iteration
3) It is mainly used for a condition so that we can skip some lines of code for a particular condition 
*/

#include<stdio.h>  
int main(){  
int i=1;//initializing a local variable       
//starting a loop from 1 to 10    
for(i=1;i<=10;i++){      
if(i==5)//if value of i is equal to 5, it will continue the loop 
{   
continue;    
}    
printf("%d \n",i);    
}//end of for loop    
return 0;  
}  