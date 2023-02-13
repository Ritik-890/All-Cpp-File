#include<iostream>
#include<iomanip>

using namespace std;

/*Constants, Manipulators & operator precedence*/

int main()
{
    // int a = 34;
   
    // cout<<"The value of a was: "<<a<<endl;
    // a=45;
    // cout<<"The value of a is: "<<a<<endl;


    //  Manipulators in c++ 

    // int a=5, b=627, c=97957;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;


    // operator precedence
    int a=5, b=4;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;


    return 0;
}