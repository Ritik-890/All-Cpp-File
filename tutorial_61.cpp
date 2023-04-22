#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Connecting our file with hout stream
    ofstream hout("sample61.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name:";
    cin>>name;
    
    // Writing a string to the file
    hout<<name + "is my name";

    // Disconnecting our file
    hout.close();

    // Connecting our file with hin stream
    ifstream hin("sample61.txt");

    // creating a content string variable and fillig it with string present there in the text file
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    // Disconnecting our file
    hin.close();

    return 0;
}