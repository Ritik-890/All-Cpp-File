#include <iostream>
using namespace std;

/*Recursion and Recurcive function*/

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    //  n! = n * (n-1)!
    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    // cout<<"The factorial of " <<a<< " is "<<factorial(a)<<endl;
    cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) << endl;

    return 0;
}