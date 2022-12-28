// Write a program in C++  to enter name ,roll and marks of five students at runtime of the program and display them. Use separate functions for input & output .

#include <iostream>
#include <conio.h>
using namespace std;
class details
{
public:
    int roll;
    int marks;
    int i, no_of_students;
    char name[30];
    void getdata()
    {

        cout << "Enter the name of the student " << endl;
        cin >> name;
        cout << "Enter the roll of the student " << endl;
        cin >> roll;
        cout << "Enter the marks of the student " << endl;
        cin >> marks;
    }
    void print_data()
    {

        cout << "The name of the student " << name << endl;
        cout << "The roll of the student " << roll << endl;
        cout << "The marks of the student " << marks << endl;
    }
};

int main()
{
    int count, i;
    cout << "Enter the number of students" << endl;
    cin >> count;
    details students[count];
    // details students0;
    // details students1;
    // details students2;
    for (i = 0; i < count; i++)
    {
        cout << "Enter details for " << i + 1 << endl;
        students[i].getdata();
    }

    for (i = 0; i < count; i++)
    {
        cout << "showing details for " << i + 1 << endl;
        students[i].print_data();
    }

    getch();
    return 0;
}