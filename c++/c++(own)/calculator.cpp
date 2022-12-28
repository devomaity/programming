#include <iostream>
#include <conio.h>

using namespace std;

int choose;

class calculator
{

public:
    int a, b, result;

    void getdata()
    {
        cout << "Enter operands" << endl;
        cin >> a >> b;
    }

    void add()
    {
        result = a + b;
        cout << "a + b = " << result << endl;
    }
    void sub()
    {
        result = a - b;
        cout << "a - b = " << result << endl;
    }
    void mul()
    {
        result = a * b;
        cout << "a * b = " << result << endl;
    }
    void div()
    {
        result = a / b;
        cout << "a / b = " << result << endl;
    }
    void decide()
    {
        choose;
        cout << "Enter choose" << endl;
        cin >> choose;
    }
    void reverse()
    {
        cout << "Enter 1 for addition" << endl;
        cout << "Enter 2 for substraction" << endl;
        cout << "Enter 3 for multiplication" << endl;
        cout << "Enter 4 for division" << endl;
        cout << "Enter 0 to exit" << endl;
    }
};

int main()
{
    calculator cal;
    cal.reverse();
    cal.decide();

    do
    {

        switch (choose)
        {
        case 1:

            cal.getdata();
            cal.add();
            if (choose >= 1 && choose <= 4)
            {
                cal.reverse();
                if (choose >= 1 && choose <= 4)
                {
                    cal.decide();
                }
            }
            break;
        case 2:

            cal.getdata();
            cal.sub();
            if (choose >= 1 && choose <= 4)
            {
                cal.reverse();
                if (choose >= 1 && choose <= 4)
                {
                    cal.decide();
                }
            }
            break;
        case 3:

            cal.getdata();
            cal.mul();
            if (choose >= 1 && choose <= 4)
            {
                cal.reverse();
                if (choose >= 1 && choose <= 4)
                {
                    cal.decide();
                }
            }
            break;
        case 4:

            cal.getdata();
            cal.div();
            if (choose >= 1 && choose <= 4)
            {
                cal.reverse();
                if (choose >= 1 && choose <= 4)
                {
                    cal.decide();
                }
            }
            break;
        }
    } while (choose >= 1 && choose <= 4);
}