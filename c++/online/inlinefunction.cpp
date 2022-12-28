/*C++ inline function is powerful concept that is commonly used with classes. If a function is inline, the compiler places a copy of the code of that function at each point where the function is called at compile time.*/

/*
Inline should not be used to in a funtion under such circumstances.
1) If a function contains a loop. (for, while, do-while)
2) If a function contains static variables.
3) If a function is recursive.
4) If a function return type is other than void, and the return statement does not exist in function body.
5) If a function contains switch or goto statement.
*/

#include <iostream>
using namespace std;
inline int product(int x, int y)
{
     return x * y;
}
int main()
{
    int a,b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "The value of a and b is " << product(a, b) << endl;
    cout << "The value of a and b is " << product(a, b) << endl;
    cout << "The value of a and b is " << product(a, b) << endl;
    cout << "The value of a and b is " << product(a, b) << endl;

    return 0;
}