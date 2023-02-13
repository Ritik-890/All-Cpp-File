#include <iostream>
using namespace std;

 /*  Array of object & Passing object as function arguments  */

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 345;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee ritik, rohan, rakesh;
    // ritik.setId();
    // ritik.getId();

    Employee nf[5];
    for (int i = 0; i < 5; i++)
    {
        nf[i].setId();
        nf[i].getId();
    }

    return 0;
}