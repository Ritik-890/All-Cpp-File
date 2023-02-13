#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// this will not swap a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// // Call by reference using pointer
void sawpPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call by reference using c++ reference variables
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is  " << y << endl;
    // sawpPointer(&x, &y);     //This will swap a and b using pointer reference
    swapReferenceVar(x, y); // This will swap a and b using reference variable
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}
