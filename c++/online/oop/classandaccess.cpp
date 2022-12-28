#include<iostream>
#include<conio.h>
using namespace std;
class Employee // class name
{
private: // access specifier
    int a,b,c;
   
public: // access specifier
    int n,d;
    setdata(int x, int y, int z);
    printdata();
    // class members
};

Employee::printdata()
{
   cout<<"The value of a is "<<a<<endl;
   cout<<"The value of b is "<<b<<endl;
   cout<<"The value of c is "<<c<<endl;
}  
Employee::setdata(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
int main()
{
    Employee devo; // object 
    devo.setdata(56,23,45);
    devo.printdata();

    getch();
    return 0;
}