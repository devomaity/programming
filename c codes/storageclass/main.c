#include<stdio.h>
#include "support.c"
 //It should be compiled and executed
int count;
extern void write_extern();
int main()
{
	count = 5;
	write_extern();
	return 0;
}
