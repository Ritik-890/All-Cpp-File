#include<iostream>
using namespace std;

  /*  Friend function  */

class complex{
    int a, b;
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
    
};

int main(){
    complex c1, c2;
    c1.setNumber(1,4);
    c2.setNumber(5,8);

    c1.printNumber();
    c2.printNumber();
    
    return 0;
}