#include<stdio.h>

int main(){
    int a;
    int arr[6]={10,20,30,40,50,60};
    for ( a=0; a<5; a++)
    {
        printf("\n array[%d]=%d",a,arr[a]);
    }
    
    return 0;
}