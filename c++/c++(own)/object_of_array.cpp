#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    string name;
    int age;
    char gender;
}

int main()
{
    int limit;
    cin>>limit;
    student arr[limit];
    for ( i = 0; i < limit; i++)
    {
        cout<<"name ="<<endl;
        cin>>arr[i].name;
        cout<<age =  <<endl;
        cin>>arr[i].age<<endl;
        cout<<"gender = "<<endl;
        cin>>arr[i].gender;
    }
    
    

    getch();
    return 0;
}