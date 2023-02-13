#include<iostream>
using namespace std;

/*   Friend class & Member friend function   */

class Complex{
    int a, b;
    // Individually declaring function as friends
    friend int Calculator :: sumRealComplex(Complex, Complex);
    friend int Calculator :: sumCompComplex(Complex, Complex);

public:
   void setNumber(int n1, int n2)
   {
      a = n1;
      b = n2;
   } 

   void printNumber()
   {
      cout<<"Your number is "<< a <<" + "<< b <<" i "<<endl;
   }
};



int main(){
    
    return 0;
}