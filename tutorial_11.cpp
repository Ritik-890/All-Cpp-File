#include<iostream>
using namespace std;

/*Break & continueous statement*/

int main()
{
    // for(int i=0; i<40; i++){
    //     // cout<<i<<endl;
    //     if(i==3){
    //         break;
    
    //     }
    //     cout<<i<<endl;
    // }

    for(int i=0; i<10; i++){
        
        if(i==3){
            continue;
    
        }
        cout<<i<<endl;
    }

    return 0;
}