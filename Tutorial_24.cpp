#include <iostream>
using namespace std;

 /*  Static Data Member & Method */

class Employee
{

    int Id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the Id " << endl;
        cin >> Id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this employee is " << Id << " and this is employee number " << count << endl;
    }

    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

/* count is the static data member of class Employee */
int Employee ::count = 100; // default value is 0

int main()
{
    Employee ritik, singh, lovish;
    // ritik.Id = 1;
    // ritik.counter = 2;    /* cannot do this as Id and count are private */
    ritik.setData();
    ritik.getData();
    Employee ::getcount();

    singh.setData();
    singh.getData();
    Employee ::getcount();

    lovish.setData();
    lovish.getData();
    Employee ::getcount();

    return 0;
}