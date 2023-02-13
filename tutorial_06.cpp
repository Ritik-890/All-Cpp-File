#include<iostream>
using namespace std;

/*Header files & Operater*/

int main() 
{
    int a=4, b=5;
    cout<<"Operator in c++:"<<endl;
    cout<<"Following are the type of operator in c++"<<endl;
    // cout<<"This is ritik World program";

    // Arithmetic operator   
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ b is "<<a++<<endl;
    cout<<"The value of a-- b is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    /* Assignment operaters ---> used to assign value to variables
        int a=2, b=6;
        char d='d';
        */
        // comparision operators
        cout<<"Following are the comparision operators in c++"<<endl;
        cout<<"The value of a == b is "<<(a==b)<<endl;
        cout<<"The value of a != b is "<<(a!=b)<<endl;
        cout<<"The value of a >= b is "<<(a>=b)<<endl;
        cout<<"The value of a <= b is "<<(a<=b)<<endl;
        cout<<"The value of a > b is "<<(a>b)<<endl;
        cout<<"The value of a < b is "<<(a<b)<<endl;

        // Logical operators
        cout<<"Following are the logical operators in c++"<<endl;
        cout<<"The value this logical and operator ((a==b) && (a<b))  is: "<<((a==b) && (a<b))<<endl;
        cout<<"The value this logical or operator ((a==b) || (a<b))  is: "<<((a==b) || (a<b))<<endl;
        cout<<"The value this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;
 


    return 0;
}