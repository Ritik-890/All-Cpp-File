#include <iostream>
using namespace std;

/*for. while and do-while loops*/

int main()
{
    /* LOOPS IN C++:
    There are three types of loops in c++:
    1. For loop
    2. While loop
    3. do-While loop
    */

    /* for loop in c++ */
    // int i=1;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;

    /* Syntax for loop
       for(Initialzation; condition; updation)
       {
        loop body(c++ code);
       }
    */

    // for (int i = 0; i < 40; i++)
    // {
    //     cout << i << endl;
    // }

    // EXAMPIE OF INFINITE LOOPS
    // for(int i=1; 45<50; i++)
    // {
    //     cout<<i<<endl;

    // }

    /* WHILE LOOP IN C++ */
    // Syntax:
    // While (condition)
    // {
    //     C++ statements;

    // }

    /* PRINTING 1 TO 49 USING WHILE LOOP */
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;

    // }

    /* EXAMPLE OF INFINITE WHILE LOOP */
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    /* do-while loop */
    // syntax:
    // do{
    //     C++ statements;
    // }while(condition);
    
    int i=5;
    do{
        cout<<i<<endl;
        i++;

    }while(false);

    return 0;
}