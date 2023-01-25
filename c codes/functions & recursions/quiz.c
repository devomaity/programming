// without argument and without return?
#include<stdio.h>
void recall();

int main(){
    
    recall();
}
void recall()
{
    int x,y=10;
    printf("\n Enter an integer ");
    scanf("%d",&x);
    while (x<y)
    {
        printf("\n %d",x);
        x++;
    }
    

}