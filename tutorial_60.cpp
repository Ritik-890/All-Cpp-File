#include<iostream>
#include<fstream>
using namespace std;

/* 
The usefull classes for working with files in c++ are:
1. fstreambase
2. ifstreambase --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

/*
In order work files in c++, you will have to open it. Primarily ,thre are 2 ways to opena files
1. Using the constructor
2. Using the member function open() of the class
*/

int main(){
    string st = "Ritik is a software developer";
    
    // Openning files using constructor and writing it
    // ofstream out("sample60.txt");  // Write operation
    // out<<st;


    string st2;
    // Openning files using constructor and Reading it
    ifstream in("sample60b.txt");  // Read operation
    // in>>st2;
    getline(in,st2);
    cout<<st2;

    return 0;
}