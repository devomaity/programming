/*
default argument

If a function with default arguments is called without passing arguments, then the default parameters are used.

If a function with default arguments is called without passing arguments, then the default parameters are used.
*/

#include <iostream>
using namespace std;
float moneyreceived(int currentmoney,  float factor=1.04)
{
    return currentmoney*factor;
}
int main()
{
    int money=100000;
    cout<<"you have Rs "<<money<<" after 1 year you will get Rs "<<moneyreceived(money)<<endl;
    

    return 0;
}
// const key is used in programs so that the value assigned to a variable coudn't be changed  
