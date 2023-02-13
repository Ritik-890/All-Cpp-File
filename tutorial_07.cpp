#include<iostream>
using namespace std;

/*Reference variable & Typecasting*/

int c = 45;

int main()
{
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

    float d=34.4F;
    long double s=34.5L;
    

    // cout<<"The value of d is "<<d<<endl<<"The value of s is "<<s<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.5l is "<<sizeof(34.5l)<<endl;
    // cout<<"The size of 34.5L is "<<sizeof(34.5L)<<endl;

    // Reference variable
    // float x=445;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    
    // **********Typecasting***************
    int a=45;
    int b=45.46;

    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<(float)a<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a +(int)b<<endl;


    return 0;

}