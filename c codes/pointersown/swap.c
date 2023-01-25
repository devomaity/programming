#include<stdio.h>
#include<conio.h>

int main(){
    
    int *ptr1,p1;
    ptr1 = &p1;
    printf("Enter the value of p1\n");
    scanf("%d",&p1);
    int *ptr2,p2;
    ptr2 = &p2;
    printf("Enter the value of p2\n");
    scanf("%d",&p2);
    printf("Before swaping the value of ptr1 = %d and ptr2 = %d\n\n",*ptr1,*ptr2);
    printf("Address ptr1 = %d and value ptr1 = %d\n\n",ptr1,*ptr1);
    printf("Address ptr1 = %d and value ptr1 = %d\n\n",ptr1+1,*ptr1+1);
    printf("Address ptr2 = %d and value ptr2 = %d\n\n",ptr2,*ptr2);
    printf("Address ptr2 = %d and value ptr2 = %d\n\n",ptr2+1,*ptr2+1);
    // swaping two values
    int store;
    store = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = store;
    printf("After swaping the value of ptr1 = %d and ptr2 = %d\n",*ptr1,*ptr2);
    printf("\n");

    // dererencing
    *ptr1 = 15;
    *ptr2 = 20;
     printf("After derefrencing the value of ptr1 = %d and ptr2 = %d\n",*ptr1,*ptr2);

    getch();
    return 0;
}