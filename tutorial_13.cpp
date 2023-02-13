#include <iostream>
using namespace std;

/*Array and pointers Arithmetic*/

int main()
{
    int marks[] = {48, 46, 90, 24};
    // Array Example
    int mathmarks[4];
    mathmarks[0] = 394;
    mathmarks[1] = 689;
    mathmarks[2] = 580;
    mathmarks[3] = 237;

    cout << "These are math marks " << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;

    // you can change the value of an array
    marks[2] = 345;

    cout << "These are marks " << endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }

    // POINTERS AND ARRAYS

    int *p = marks;
    cout << *(p++) << endl;
    cout << *(++p) << endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}