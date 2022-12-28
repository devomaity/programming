/*
setw () is a function in Manipulators in C++:
The setw() function is an output manipulator that inserts whitespace between two variables. You must enter an integer value equal to the needed space
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x=5, y=6, z=7;
    cout<<"The value of x is:"<<setw(6)<<x<<endl;
    cout<<"The value of y is:"<<setw(4)<<y<<endl;
    cout<<"The value of z is:"<<setw(2)<<z<<endl;
    return 0;
}