// pointer - pointer is a derived datatype which stores the address of any other variable.
// datatype *(asterisk) pointer variable
// Example- int* n
            /* here the datatype is int , (*)asterisk is represents pointer and n is a pointer
             variable which stores the address of any other variable.*/   
/* Note- int is not the data type of the pointer variable(n) it means pointer varible is containing the address of a variable whose data type is int.It means pointer variable stores an interger value.*/
// int*n; declaration is valid
// int * n; declaration is valid
// int* n=&a; valid initialization
// int a,*n=&a; valid initialization
#include<stdio.h>

int main(){

    int n=7;
    int *ptr;// declaration of pointer 
    ptr=&n;// initializing the pointer
    printf("\n %d",*ptr);
    return 0;
}
