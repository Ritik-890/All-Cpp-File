#include<iostream>
using namespace std;

/*  Constructor with Default arguments  */

class Simple{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b=6, int c=3){
           data1 = a;
           data2 = b;
           data3 = c;

        }

        void printData();

};

void Simple :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<" , "<< data2<<" and "<<data3<<endl;

}

int main(){
    Simple s(7, 2);
    s.printData();

    return 0;
}