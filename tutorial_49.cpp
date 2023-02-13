#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:

constructor (argument-list) : initilization-section
{
    assignment + other code;
}
class Test{
    int a; 
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
};
*/
class Test{
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : b(j), a(i + b)   // --> RED Flag this will creat problem because a will be initialized first
        // Test(int i, int j) : a(i), b(2 * j)
        Test(int i, int j) : a(i), b(a + j)
        {
            cout<<"Constructor executed "<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};

int main(){
    Test t(4,9);
    
    return 0;
}