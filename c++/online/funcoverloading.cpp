/*
Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading. In Function Overloading “Function” name should be the same and the arguments should be different. Function overloading can be considered as an example of a polymorphism feature in C++.
*/
#include <iostream>
using namespace std;
int overload(int a, int b);
float overload(float n, float c);
float overload(float x, int y);

int overload(int a, int b)
{
    return a + b;
}
float overload(float n, float c)
{
    return n * c;
}
float overload(float x, int y)
{
    return x + y;
}
int main()
{
    int f, z;
    float d, t;
    cout<<"Enter the value of f and z"<<endl;
    cin >> f >> z;
    cout<<"Enter the value of d and t"<<endl;
    cin >> d >> t;
    cout << "The sum of a + b =" << overload(f, z) << endl;
    cout << "The product of n*c =" << overload(d, t) << endl;
    cout << "The sum of x + y =" << overload(d, f) << endl;
    return 0;
}