#include <iostream>
#include <conio.h>

using namespace std;
class calculator
{

public:
    int a, b, result;
    void decide()
    {
        char choose_operator;
        cout << "Enter operation - (+,-,*,/)" << endl;
        cin >> choose_operator;
        a, b;
        cout << "Enter two numbers" << endl;
        cin >> a >> b;

        if (choose_operator == '+')
        {
            add();
        }
        else if (choose_operator == '-')
        {
            sub();
        }
        else if (choose_operator == '*')
        {
            mul();
        }
        else if (choose_operator == '/')
        {
            div();
        }
        else
        {
            cout << "Invalid operation" << endl;
        }
    }
    void add()
    {
        result = a + b;
        cout << a<< "+" <<b<< "="  << result << endl;
    }
    void sub()
    {
        result = a - b;
        cout << a<< "-" <<b<< "="  << result << endl;
    }
    void mul()
    {
        result = a * b;
        cout << a<< "*" <<b<< "="  << result << endl;
    }
    void div()
    {
        result = a / b;
        cout << a<< "/" <<b<< "="  << result << endl;
    }
    void reverse()
    {
        char choice;
        cout << "Enter Y to run or quit" << endl;
        cin >> choice;
        if (choice == 'Y')
        {
            decide();
        }
        else
        {
            exit(0);
        }
    }
};

int main()
{
    calculator fun;
    fun.decide();
    fun.reverse();
    getch();
    return 0;
}