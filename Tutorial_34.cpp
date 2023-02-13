#include <iostream>
using namespace std;

/* Copy Constructor */

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        // when copy constructor is found, complier suplies its own copy constructor
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this obj is " << a << endl;
    }
};



int main()
{
    Number x(23), y(78), z(49);
    x.display();
    y.display();
    z.display();

    Number z1(z); //  Copy constructor ivoked
    z1.display();

    Number z3 = z; // Copy constructor ivoked
    z3.display();
    //  z1 should exactly resemble z or x or y

    return 0;
}