#include<stdio.h>
extern int count;
void write_extern()
{
  printf("count is %d\n", count);
  //It should be compiled only
}


