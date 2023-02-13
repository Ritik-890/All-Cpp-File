#include <iostream>
using namespace std;

//  Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 67.0;
    }
    Employee() {}
};

//  Derived Class syntax:
/* class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public visibility mode: Public member of the base class becomes public members of the derived class
3. Private visibility mode: Public member of the base class becomes private members of the derived class
4. Private members are never inherited
*/

//  Creating a programmer class derived from Employee Base class
class Programmer : Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 7;
    }

    void getData(){
        cout<<id<<endl;
    }
    
};

int main()
{
    Employee ritik(1), rohan(2);
    cout << ritik.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    skillF.getData();
    
    return 0;
}