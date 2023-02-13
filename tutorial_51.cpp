#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;

        }

        void setData(int a, int b){
            real = a;
            imaginary = b;

        }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex; 
    // (*ptr).setData(3,6);   is exactly same as
    ptr->setData(6,9);
    // (*ptr).getData();
    ptr->getData();


    // Array of objects
    Complex *ptr1 = new Complex[2];
    ptr1->setData(3,9);
    ptr1->getData();
    return 0;
}