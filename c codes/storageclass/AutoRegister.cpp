#include<stdio.h>
int main()
{
	// Auto Storage Class 
	int year=2022;
	auto int month=8;
	auto int day=3;
	printf("\n Today's date = %d.%d.%d ",day,month,year);
	
	// Register Storage Class
	register int kilometer=3;
	printf("\n The distance of my home and office is more than %d kms",kilometer);
	
	return 0;
}
