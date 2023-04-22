#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // Ways to create a vector
    vector<int> vec1;   // Zero length integer vector

    int element, size = 5;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for(int i = 0; i<size; i++){
    //     cout<<"Enter an element to add to this vector:";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // // vec1.pop_back();
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 546, 873);
    // display(vec1);

    vector<char> vec2(8);  // 4-element character vector 
    // vector<char> vec3(vec2);   // 4-element character vector form vec2
    // display(vec3);
    vector<int> vec4(6,9);  // 6-element vector of 3s
    display(vec4);
    cout<<vec4.size();
    
    return 0;
}