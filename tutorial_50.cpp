#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a; 
    *ptr = 384;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // New operator
     int *p = new int(48);
    // float *p = new float(84.09);
    cout<<"The value at address p is "<< *(p)<<endl;

    int *arr = new int[5];
    arr[0] = 59;
    arr[1] = 84;
    arr[2] = 92;
    arr[3] = 22;
    arr[4] = 90;
    // delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    cout<<"The value of arr[3] is "<<arr[3]<<endl;
    cout<<"The value of arr[4] is "<<arr[4]<<endl;

    // Delete operator



    return 0;
}