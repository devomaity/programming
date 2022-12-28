#include <iostream>
#include <conio.h>
using namespace std;

class prime
{
private:
public:
    int n, count = 0, i;

    int checkprime();
    int show()
    {
        return checkprime();
    }
};

int prime::checkprime()
{
    for (i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count >= 1)
    {
        cout << "not a prime number" << endl;
    }
    else
    {

        cout << "prime number" << endl;
    }
}

int main()
{
    prime access;
    cout << "Enter a number" << endl;
    cin >> access.n;
    access.show();

    getch();
    return 0;
}