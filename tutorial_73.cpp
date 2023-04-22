#include<iostream>
#include<map>
#include<string>
using namespace std;


int main(){
    // Map is an associative array
    map<string, int> marksMap;
    marksMap["Aditya"] = 78;
    marksMap["Rohit"] = 89;
    marksMap["Richitha"] = 56;
    marksMap["Rohan"] = 34;
    marksMap["Ritik"] = 96;

    marksMap.insert({{"kozume"s, 533}, {"Rutho",344}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter !=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The size is: "<<marksMap.max_size()<<endl;

    return 0;
}