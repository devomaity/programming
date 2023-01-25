/*
1. First ask how much person's details you want to entry
2.Next take input like name, id,branch name, account_open_amount [can use loop to take everyone's input]
3. Then ask what you want to do like deposit withdraw and exit
4.If you choose deposit then ask in which person's account you want to do
5.Then match that name with the array of name. If matched then show details and continue the deposit process
6.If two person's name match then match their id
7. Continue the what you want to do like deposit withdraw and exit process like previous
*/
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

class bank_details
{

public:
    int input, account_open_amount, i, j;
    double id;
    char branch_name, name[30], choose[20];

    void persons()
    {
        cout << "Enter no. of persons" << endl;
        cin >> input;
    }
    // function for user bank details
    void details()
    {

        for (i = 0; i < input; i++)
        {
            cout << "Enter name of person " << i + 1 << endl;
            fflush(stdin);
            cin >> name;
            cout << "Enter id for person " << i + 1 << endl;
            fflush(stdin);
            cin >> id;
            cout << "Enter branch for person " << i + 1 << endl;
            fflush(stdin);
            cin >> branch_name;
            cout << "Enter amount for person " << i + 1 << endl;
            fflush(stdin);
            cin >> account_open_amount;
        }
    }
    // function to deposit or withdraw
    void user_decide()
    {
        int deposit, withdraw, decide;
        cout << "Enter 1: Deposit" << endl;
        cout << "Enter 2: Withdraw" << endl;
        cout << "Enter 3: Exit" << endl;
        scanf("%d", &decide);
        switch (decide)
        {
        case 1:
            depo_sit();
            break;
        case 2:
            cout << "Enter withdraw amount" << endl;
            cin >> withdraw;
            cout << "Amount withdrawn is " << withdraw << endl;
            break;
        case 3:
            exit(0);
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
    void depo_sit()
    {

        int deposit2;
        cout << "choose account" << endl;
        fflush(stdin);
        cin >> deposit2;
        fflush(stdin);

        while (strcmp(choose, name))
        {
            cout << "Id: " << id << endl;
            cout << "Branch: " << branch_name << endl;
            cout << "Id: " << account_open_amount << endl;
            fflush(stdin);
            cout << "Enter deposit amount" << endl;
            cin >> deposit2;
            cout << "Rs " << deposit2 << " has been deposited to your account" << endl;
            break;
            if (strcmp(choose, name) != 0)
            {
                cout << "Sorry! no account exist" << endl;
            }
        }
    }
};
int main()
{
    bank_details access;
    access.persons();
    access.details();
    access.user_decide();
    access.depo_sit();

    getch();
    return 0;
}