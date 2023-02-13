#include<iostream>
using namespace std;


    typedef struct employee{
        int eid;
        char favchar;
        float salary;

    }ep;

    union money
    {
        int rice;
        char car;
        float pounds;

    };


    int main()
    {
        enum meal{ breakfast, lunch, dinner};
        meal m1 = lunch;
        // cout<<(m1==1);
        cout<<breakfast<<endl;
        cout<<lunch<<endl;
        cout<<dinner<<endl;
        // union money m1;
        // m1.rice = 34;
        // m1.car = 'c';
        // cout<<m1.car;


        // ep ritik;
        // ritik.eid = 4;
        // ritik.favchar = 'r';
        // ritik.salary = 6000000;
        // cout<<"The value is "<<ritik.eid<<endl;
        // cout<<"The value is "<<ritik.favchar<<endl;
        // cout<<"The value is "<<ritik.salary<<endl;

        return 0;
    }
    

    
