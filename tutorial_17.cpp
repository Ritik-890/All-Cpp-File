#include<iostream>
using namespace std;

/*Inline function &  default arguments & constant arguments*/


    inline int product(int a, int b){
        return a*b;

    }

    int moneyReceived(int currentMoney, float factor=1.04){
        return currentMoney * factor;

    }

    // int strlen(const char *p){

    // }

    int main()
    {
        int a, b;
        // cout<<"Enter the value of a and b  "<<endl;
        // cin>>a>>b;
        // cout<<"The product of a and b "<<product(a, b)<<endl;
        int money = 100000;
        cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;

        return 0;

    }
   
