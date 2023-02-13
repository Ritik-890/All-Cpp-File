#include <iostream>
using namespace std;

/*Basic input/Output and More*/

int main()
{

    int num1, num2;
    cout << "Enter the value of num1:\n"; //'<<' is called Insertion operator
    cin >> num1;                          // '>>' is called Extraction operaotor

    cout << "Enter the value of num2:\n";
    cin >> num2;
    cout << "The sum is " << num1 + num2;

    return 0;
}