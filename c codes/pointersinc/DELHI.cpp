#include <stdio.h>
int main()
{
	char *city="DELHI";
	char *cptr=city;  //  &city[0]
	while(*cptr!='\0')
	{
		printf("\n%c is stored at address %u",*cptr,cptr);
		cptr++;
	}
	
	return 0;
}
	
	
	
	
	

